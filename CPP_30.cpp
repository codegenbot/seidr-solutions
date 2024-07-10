#include <iostream>
#include <vector>

float get_positive(float num1, float num2) {
    if(num1 == num2)
        return (num1 > 0.0f) ? num1 : -num1;
    else
        return 0.0f;
}

bool issame(float a, float b, float c, float d) {
    return (a == b && b == c && c == d);
}

int main() {
    float num1, num2, num3, num4;
    std::cout << "Enter the first number: ";
    if (!(std::cin >> num1)) {
        std::cout << "Invalid input for the first number." << std::endl;
        return 1;
    }
    std::cout << "Enter the second number: ";
    if (!(std::cin >> num2)) {
        std::cout << "Invalid input for the second number." << std::endl;
        return 1;
    }
    std::cout << "Enter the third number: ";
    if (!(std::cin >> num3)) {
        std::cout << "Invalid input for the third number." << std::endl;
        return 1;
    }
    std::cout << "Enter the fourth number: ";
    if (!(std::cin >> num4)) {
        std::cout << "Invalid input for the fourth number." << std::endl;
        return 1;
    }

    bool are_same = issame(num1, num2, num3, num4);
    
    if (are_same) {
        float result = get_positive(num1, num2);
        std::cout << "The positive of the numbers is: " << result << std::endl;
    } else {
        std::cout << "The numbers are not same." << std::endl;
    }
    
    return 0;
}