#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> l;
    float x;
    cout << "Enter numbers (enter 'q' to quit):" << endl;
    while (cin >> x) {
        if (x == 'q') break;
        l.push_back(x);
    }
    vector<float> result = get_positive(l);
    for (float x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}