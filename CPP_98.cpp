```cpp
#include <iostream>
#include <string>

int count_upper(std::string str) {
    int count = 0;
    for(int i = 1; i < str.length(); i += 2) {
        if(std::toupper(str[i-1]) == 'A' || std::toupper(str[i-1]) == 'E' || std::toupper(str[i-1]) == 'I' || std::toupper(str[i-1]) == 'O' || std::toupper(str[i-1]) == 'U') {
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
    std::cout << "Number of uppercase vowels in the string is: " << result << std::endl;
    return 0;
}