```
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool has_close_elements(vector<float> a, float threshold) {
    for(int i = 1; i < a.size(); i++) {
        if(abs(a[i] - a[i-1]) <= threshold)
            return true;
    }
    return false;
}

int main() {
    vector<float> numbers = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    float threshold = 0.5f;
    if(has_close_elements(numbers, threshold)) {
        cout << "The array contains close elements." << endl;
    } else {
        cout << "The array does not contain close elements." << endl;
    }
    return 0;
}