#include <cctype>
#include <algorithm>
#include <iostream>
#include <cassert>

int hex_key(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](char c){return tolower(c);});
    int result = 0;
    for (char c : s) {
        if (isalnum(c)) {
            result++;
        }
    }
    return result;

}

int main() {
    assert(hex_key("") == 0);
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int output = hex_key(input);
    std::cout << "The number of alphanumeric characters is: " << output << std::endl;
    return 0;
}