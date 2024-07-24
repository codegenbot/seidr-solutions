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
            auto even = vec.begin();
            std::advance(even, i);
            auto end = even;
            std::advance(end, 1);
            while (end != vec.end()) {
                if (*even <= *end) {
                    result.push_back(*even);
                    ++even;
                    end = even; // increment only one iterator
                } else {
                    std::swap(*even, *(--end));
                }
            }
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}

int main() {
    assert(checkVectors(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}