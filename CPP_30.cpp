#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<float> get_positive(std::vector<float> numbers) {
    std::vector<float> positive_numbers;
    
    for (float num : numbers) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    
    return positive_numbers;
}

int main() {
    std::vector<float> vec1 = {1.5, -2.3, 3.4, 0.0, 5.2};
    std::vector<float> vec2 = {1.5, -2.3, 3.4, 0.0, 5.2};
    
    if (issame(vec1, vec2)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are different." << std::endl;
    }
    
    std::vector<float> positive_nums = get_positive(vec1);
    
    std::cout << "Positive numbers: ";
    for (float num : positive_nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}