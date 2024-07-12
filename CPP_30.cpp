#include <iostream>
#include <vector>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); ++i)
        if (v1[i] != v2[i])
            return false;
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0)
            result.push_back(x);
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1, -2, 3, -4, 5};
    std::vector<float> positive_numbers = get_positive(numbers);
    
    if (!issame(positive_numbers, {1, 3, 5})) {
        std::cout << "Error: The vectors are not the same." << std::endl;
    } else {
        std::cout << "The positive numbers are: ";
        for (float x : positive_numbers) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}