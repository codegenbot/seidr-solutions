```cpp
#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& a, float delta) {
    for (int i = 0; i < a.size() - 1; i++) {
        if (std::abs(a[i] - a[i + 1]) <= delta) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a;
    float num;
    int n;

    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        a.push_back(num);
    }

    float d;
    std::cout << "Enter delta: ";
    std::cin >> d;

    if (has_close_elements(a, d)) {
        std::cout << "Vector has at least two elements that are less than or equal to delta." << std::endl;
    } else {
        std::cout << "Vector does not have at least two elements that are less than or equal to delta." << std::endl;
    }

    return 0;
}