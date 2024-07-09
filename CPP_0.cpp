#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    float num;

    cout << "Enter the elements of the vector: ";
    while(cin >> num) {
        a.push_back(num);
    }

    if (has_close_elements(a, 0.1f)) {
        cout << "The vector contains close elements." << endl;
    } else {
        cout << "The vector does not contain close elements." << endl;
    }
    return 0;

}

bool has_close_elements(const vector<float>& vec, float threshold) {
    for (size_t i = 1; i < vec.size(); ++i) {
        if (abs(vec[i] - vec[i-1]) <= threshold) {
            return true;
        }
    }
    return false;
}