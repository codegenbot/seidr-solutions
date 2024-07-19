#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    vector<float> b = {1.1, 2.2, 3.1, 4.1, 5.1};
    assert(has_close_elements(b, 0.5) == false);
    
    return 0;
}