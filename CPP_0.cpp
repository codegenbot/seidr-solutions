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
    vector<float> numbers = {static_cast<float>(1), static_cast<float>(2), static_cast<float>(3.9), static_cast<float>(4), static_cast<float>(5), static_cast<float>(2.2), static_cast<float>(0)};
    assert(has_close_elements(numbers, 0.5) == false);
    
    vector<float> numbers2 = {static_cast<float>(1.1), static_cast<float>(2.2), static_cast<float>(3.1), static_cast<float>(4.1), static_cast<float>(5.1)};
    assert(has_close_elements(numbers2, 0.5) == false);
}