#include <initializer_list>
#include <vector>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
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

int main() {
    std::vector<float> vec1 = {1, 2, 3};
    std::vector<float> vec2 = {-4, -5, 6};
    if (issame(vec1,vec2)) {
        std::cout << "Vectors are same.\n";
    } else {
        std::cout << "Vectors are not same.\n";
    }
    std::cout << "Only positive numbers are: ";
    for (float num : get_positive(vec1,vec2)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}