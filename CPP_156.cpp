#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string int_to_mini_roman(int number){
    std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    std::string result = "";

    for (int i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            result += symbols[i];
            number -= values[i];
        }
    }

    return result;
}


int main() {
    assert(int_to_mini_roman(1000) == "m");
    assert(int_to_mini_roman(7) == "vii");
    assert(int_to_mini_roman(43) == "xliii");
    assert(int_to_mini_roman(1999) == "mcmxcix");
    assert(int_to_mini_roman(4444) == "mmmmmcdxliv");

    std::cout << "All test cases passed!\n";

    return 0;
}