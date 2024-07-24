#include <iostream>
#include <cctype>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 1; i < s.length(); i += 2) {
        if(std::toupper(s[i-1]) == 'A' || std::toupper(s[i-1]) == 'E' || std::toupper(s[i-1]) == 'I' || std::toupper(s[i-1]) == 'O' || std::toupper(s[i-1]) == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    int result = count_upper(s);
    std::cout << "The number of vowels is: " << result << std::endl;
    return 0;
}