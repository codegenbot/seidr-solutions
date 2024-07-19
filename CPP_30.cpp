```cpp
#include <iostream>
#include <vector>

bool checksame(const std::vector<const float&>& a, const std::vector<const float&>& b) {
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

bool issame(const std::vector<const float&>& a, const std::vector<const float&>& b) {
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

std::vector<const float&> get_positive(const std::vector<const float&>& l) {
    std::vector<const float&> result; // Initialize the vector
    for (const float& num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int programMain() {
    std::vector<const float&> input;
    const float& num;
    std::cout << "Enter numbers (enter -1 to stop): ";
    while (std::cin >> num) {
        if (num == -1) break;
        input.push_back(num);
    }
    std::vector<const float&> positive = get_positive(input);
    if (issame(input, positive)) {
        std::cout << "All numbers are positive." << std::endl;
    } else {
        std::cout << "Not all numbers are positive." << std::endl;
    }
}