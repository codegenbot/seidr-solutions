#include <iostream>
#include <limits>

float get_positive(float num) {
    if(num > 0.0f)
        return num;
    else
        return -num;
}

bool issame_two(float num1, float num2) {
    return (num1 == num2);
}

bool issame_four(float num1, float num2, float num3, float num4) {
    return (issame_two(num1, num2) && issame_two(num1, num3) && issame_two(num1, num4));
}

int main() {
    float num1, num2, num3, num4;
    std::cout << "Enter the first number: ";
    if (!(std::cin >> num1)) {
        std::cout << "Invalid input for the first number." << std::endl;
        return 1;
    }
    while (!(std::cin >> num2) || (num2 != num1)) {
        std::cout << "Invalid input for the second number. Please enter a same value as the first one: ";
        if (!(std::cin >> num2)) {
            std::cout << "Invalid input for the second number." << std::endl;
            return 1;
        }
    }
    while (!(std::cin >> num3) || (num3 != num1)) {
        std::cout << "Invalid input for the third number. Please enter a same value as the first one: ";
        if (!(std::cin >> num3)) {
            std::cout << "Invalid input for the third number." << std::endl;
            return 1;
        }
    }
    while (!(std::cin >> num4) || (num4 != num1)) {
        std::cout << "Invalid input for the fourth number. Please enter a same value as the first one: ";
        if (!(std::cin >> num4)) {
            std::cout << "Invalid input for the fourth number." << std::endl;
            return 1;
        }
    }

    bool are_same = issame_four(num1, num2, num3, num4);
    
    if (are_same) {
        float result = get_positive(std::max({num1, num2, num3, num4}));
        std::cout << "The positive of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }
    
    return 0;
}