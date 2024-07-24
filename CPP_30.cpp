#include <iostream>
#include <vector>

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
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> v;
    for (int i = 0; i < n; ++i) {
        float x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        v.push_back(x);
    }

    std::vector<float> positive_elements = get_positive(v);

    std::cout << "Positive elements: ";
    for (float x : positive_elements) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}