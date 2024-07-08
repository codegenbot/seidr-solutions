```cpp
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<double> numbers, double threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    double n;
    std::vector<double> a;
    while (true) {
        std::cout << "Enter a number (-1 to finish): ";
        std::cin >> n;
        if (n == -1)
            break;
        a.push_back(n);
    }
    if (has_close_elements(a, 0.1)) {
        std::cout << "The array contains close elements." << std::endl;
    } else {
        std::cout << "The array does not contain close elements." << std::endl;
    }
}