```cpp
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool has_close_elements(vector<float> a, float tol) {
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (abs(a[i] - a[j]) <= tol) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<float> numbers;
    numbers.push_back(1.0f);
    numbers.push_back(2.0f);
    numbers.push_back(3.9f);
    numbers.push_back(4.0f);
    numbers.push_back(5.0f);
    numbers.push_back(2.2f);
    numbers.push_back(0.0f);
    assert(has_close_elements(numbers, 0.5) == false);
    
    vector<float> numbers2;
    numbers2.push_back(1.1f);
    numbers2.push_back(2.2f);
    numbers2.push_back(3.1f);
    numbers2.push_back(4.1f);
    numbers2.push_back(5.1f);
    assert(has_close_elements(numbers2, 0.5) == false);
}