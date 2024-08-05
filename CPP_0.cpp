#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(std::vector<double> numbers, double threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<double> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    double threshold = 0.5;

    if (has_close_elements(a, threshold)) {
        std::cout << "Close elements found within the threshold." << std::endl;
    } else {
        std::cout << "No close elements found within the threshold." << std::endl;
    }

    return 0;
}