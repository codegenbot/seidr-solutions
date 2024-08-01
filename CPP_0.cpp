#include <vector>
#include <cmath>
#include <cassert>

bool has_close_elements(const std::vector<int>& numbers, int threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i+1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 7};
    int threshold = 2;
    if (has_close_elements(numbers, threshold)) {
        std::cout << "Close elements found within threshold." << std::endl;
    } else {
        std::cout << "No close elements found within threshold." << std::endl;
    }
    return 0;
}