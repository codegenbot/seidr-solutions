#include <vector>
#include <cmath>
#include <initializer_list>

bool has_close_elements(std::initializer_list<double> numbers, double threshold) {
    for (int i = 0; i < std::distance(numbers.begin(), numbers.end()); i++) {
        for (int j = i + 1; j < std::distance(numbers.begin(), numbers.end()); j++) {
            if (std::abs(*std::next(numbers.begin(), i) - *std::next(numbers.begin(), j)) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    if (has_close_elements({1.0, 2.0, 3.9, 4.0, 5.0, 2.2}, 0.1)) {
        std::cout << "The array contains close elements." << std::endl;
    } else {
        std::cout << "The array does not contain close elements." << std::endl;
    }
}