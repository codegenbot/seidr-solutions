```
#include <iostream>
#include <vector>

bool check_numbers(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i]) != std::abs(b[i])) {
            return false;
        }
    }
    return true;
}

float get_positive(float num) {
    if (num > 0) {
        return num;
    } else {
        return 0.0f;
    }
}

int main 
{
    float num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (check_numbers({num1}, {num2})) {
        float result = get_positive(num1);
        std::cout << "The positive of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }

    return 0;
}