#include <iostream>
#include <vector>

bool issame(const std::vector<float>& l, float val) {
    for (float x : l) {
        if (x != val) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<float> vec(n);
    for (auto& x : vec) {
        std::cout << "Enter element " << &x << ": ";
        std::cin >> x;
    }

    std::vector<float> positives = get_positive(vec);

    if (!issame(positives, 0.0f)) {
        for (float x : positives) {
            std::cout << "Positive number: " << x << std::endl;
        }
    } else {
        std::cout << "No positive numbers found" << std::endl;
    }

    return 0;
}