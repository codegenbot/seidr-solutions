#include <vector>
#include <iostream>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1.2, -3.4, 5.6, -7.8};
    std::vector<float> positive_numbers = get_positive(numbers);
    
    for (float num : positive_numbers) {
        std::cout << num << " ";
    }
    return 0;
}