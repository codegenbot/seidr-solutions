#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

bool has_close_elements(const std::vector<float>& arr, float threshold) {
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (std::abs(arr[i] - arr[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};