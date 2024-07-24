```cpp
#include <iostream>
#include <algorithm>
#include <vector>

bool checkVectors(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            // Create a temporary vector to store the even elements.
            std::vector<float> temp;
            for (int j = i; j < vec.size() && j % 2 == 0; j++) {
                temp.push_back(vec[j]);
            }
            // Sort the temporary vector.
            std::sort(temp.begin(), temp.end());
            // Replace even elements in result with the sorted ones.
            int k = 0;
            for (int j = i; j < vec.size() && j % 2 == 0; j++) {
                result.push_back(temp[k++]);
            }
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}

assert(checkVectors(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));