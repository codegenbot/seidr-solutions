```cpp
#include <iostream>
#include <string>
#include <cctype>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 1; i < s.length(); i += 2) {
        if(std::isupper(s[i])) {
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
    std::cout << "Number of uppercase characters: " << result << std::endl;
    return 0;
}