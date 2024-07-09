```cpp
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> l;
    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        l.push_back(num);
    }

    std::vector<float> positive = getPositive(l);

    if (positive.empty()) {
        std::cout << "No positive numbers found." << std::endl;
    } else {
        std::cout << "Positive numbers: ";
        for (float num : positive) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        if (same(l, getPositive(l))) {
            std::cout << "All elements are positive." << std::endl;
        } else {
            std::cout << "Not all elements are positive." << std::endl;
        }
    }

    return 0;
}

bool same(const std::vector<float>& a, const std::vector<float>& b) {
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

std::vector<float> getPositive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}