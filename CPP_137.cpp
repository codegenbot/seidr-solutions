#include <string>
#include <algorithm>
#include <limits>

std::string compareOne(int a, float b) {
    if (a > b)
        return "A";
    else if (a < b)
        return "B";
    else
        return "Equal";
}

int main() {
    int num1;
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    float num2;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::string result = compareOne(num1, num2);
    std::cout << "The comparison result is: " << result << std::endl;

    return 0;
}