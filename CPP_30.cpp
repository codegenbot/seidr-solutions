#include <initializer_list>
#include <vector>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(a[i] == b[i])) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l, std::vector<float> v) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    for (float num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

std::cout << "Only positive numbers are: ";
for (float num : get_positive(vec1,vec2)) {
    std::cout << num << " ";
}