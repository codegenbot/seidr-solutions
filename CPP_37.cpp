```
#include <iostream>
#include <algorithm>
#include <vector>

bool areEqualVectors(const std::vector<float>& a, const std::vector<float>& b) {
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

std::vector<float> sortEven(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> even;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    even.push_back(l[j]);
                }
            }
            std::sort(even.begin(), even.end());
            result.push_back(even[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}