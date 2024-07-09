```cpp
#include <iostream>
#include <vector>

using namespace std;

bool has_close_elements(vector<float> a, float threshold) {
    for(int i = 1; i < a.size(); i++) {
        if(abs(a[i] - a[i-1]) <= threshold)
            return true;
    }
    return false;
}

int main() {
    vector<float> a;
    float threshold;

    cout << "Enter the elements of the vector (space-separated): ";
    for(float x : cin >> x) a.push_back(x);

    cout << "Enter the threshold: ";
    cin >> threshold;

    if(has_close_elements(a, threshold)) {
        cout << "There are consecutive elements with difference less than or equal to the threshold." << endl;
    } else {
        cout << "No consecutive elements have a difference less than or equal to the threshold." << endl;
    }
}