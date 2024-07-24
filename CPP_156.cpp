```cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<std::string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

std::string int_to_mini_romank(int number) {
    std::string result;
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        while (number >= values[i]) {
            number -= values[i];
            result += romanNumerals[i];
        }
    }
    return tolower(result);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The mini Roman representation of the number is: " << int_to_mini_romank(num) << endl;
    return 0;
}