#include <string>
#include <vector>

std::string int_to_mini_roman(int number) {
    std::vector<std::string> roman = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    std::vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    std::string result = "";
    int i = 12;
    while (number > 0) {
        int div = number / values[i];
        number %= values[i];
        while (div--) {
            result += roman[i];
        }
        i--;
    }
    return result;
}

int main() {
    int number;
    std::cin >> number;
    std::string result = int_to_mini_roman(number);
    std::cout << result;
    return 0;
}