#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

std::string solve(const std::string& s);

std::string solve(const std::string& s) {
    std::string temp = s;
    for (char &c : temp) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (temp.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
        std::reverse(temp.begin(), temp.end());
    }
    return temp;
}

int main() {
    std::string input = "#ccc";
    std::string output = solve(input);
    std::cout << output << std::endl;
    return 0;
}