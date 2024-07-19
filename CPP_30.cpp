```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i]) != std::abs(b[i])) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result; // Initialize the vector
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i]) != std::abs(b[i])) {
            return false;
        }
    }
    return true;
}

main() {
    std::vector<float> input;
    float num;
    std::cout << "Enter numbers (enter -1 to stop): ";
    while (std::cin >> num) {
        if (num == -1) break;
        input.push_back(num);
    }
    std::vector<float> positive = get_positive(input);
    if (issame(input, positive)) {
        std::cout << "All numbers are positive." << std::endl;
    } else {
        std::cout << "Not all numbers are positive." << std::endl;
    }
}