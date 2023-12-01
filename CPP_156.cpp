#include <iostream>
#include <vector>

std::string int_to_mini_roman(int number) {
    std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    std::string result = "";
    int i = 0;

    while (number > 0) {
        if (number >= values[i]) {
            result += symbols[i];
            number -= values[i];
        } else {
            i++;
        }
    }

    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    // Add more test cases if needed

    return 0;
}