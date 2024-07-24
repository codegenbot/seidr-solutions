```cpp
#include <iostream>
#include <string>

int count_upper(std::string str) {
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = count_upper(input);
    std::cout << "Number of uppercase letters: " << result << std::endl;
    return 0;
}