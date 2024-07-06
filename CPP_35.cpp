#include <iostream>
#include <algorithm>
#include <vector>

float maximumValue(std::vector<int> l) {
    std::vector<float> v = {5.0f, 3.0f, -5.0f, 2.0f, -3.0f, 3.0f, 9.0f, 0.0f, 124.0f, 1.0f, -10.0f};
    return *std::max_element(v.begin(), v.end());
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> l[i];
    }
    float max_val = maximumValue(l);
    std::cout << "Maximum value: " << max_val << std::endl;
    return 0;
}