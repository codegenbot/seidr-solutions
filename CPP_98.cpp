```cpp
#include <iostream>
#include <cctype>
#include <string>

int count_upper(std::string str) {
    int count = 0;
    for(int i = 1; i < str.length(); i += 2) {
        if(toupper(str[i-1]) == 'A' || toupper(str[i-1]) == 'E' || toupper(str[i-1]) == 'I' || toupper(str[i-1]) == 'O' || toupper(str[i-1]) == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int result = count_upper(str);
    std::cout << "Count of uppercase vowels is: " << result << std::endl;
    return 0;
}