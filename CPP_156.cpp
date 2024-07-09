#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string int_to_mini_romank(int number){
    std::vector<std::string> roman = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    std::vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    std::string result = "";
    
    for (int i = values.size() - 1; i >= 0; --i) {
        while (number >= values[i]) {
            result += roman[i];
            number -= values[i];
        }
    }
    
    return result;
}

int main() {
    assert(int_to_mini_romank(1000) == "m");
    
    return 0;
}