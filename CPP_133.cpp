#include <iostream>
#include <vector>

int sum_squares(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int sum = sum_squares({num1, num2});
    std::cout << "Sum of squares is: " << sum << std::endl;

    return 0;
}