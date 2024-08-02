#include <iostream>
#include <vector>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1, -2, 3, -4, 5};
    std::vector<float> positive_numbers = get_positive(numbers);

    for (float x : positive_numbers) {
        std::cout << x << " ";
    }

    return 0;
}