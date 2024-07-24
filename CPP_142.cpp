#include <iostream>
#include <string>

int sum_of_squares(int n) {
    int total = 0;
    std::string output;
    for (int i = 1; i * i <= n; ++i) {
        total += i * i;
        output += std::to_string(i) + " " + std::to_string(i * i) + " ";
    }
    return total;
}

int sumOfSquaresMain() {
    int num, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;
    sum = sum_of_squares(num);
    std::cout << "The sum of squares is: " << sum << std::endl;
    return 0;
}

int main() {
    assert(sum_of_squares({-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5,
                     14, -14, 6, 13, 11, 16, 16, 4, 10}) == -1448);
    return sumOfSquaresMain();
}