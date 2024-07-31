#include <cctype>
#include <algorithm>
#include <iostream>

std::string s;
int hex_key() {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](char c){return tolower(c);});
    int result = 0;
    for (char c : s) {
        if (isalnum(c)) {
            result++;
        }
    }
    return std::to_string(result);

}

int main() {
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    int output = hex_key();
    std::cout << "The number of alphanumeric characters is: " << output << std::endl;
    return 0;
}