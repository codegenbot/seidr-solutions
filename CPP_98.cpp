#include <iostream>
#include <string>

int count_upper(std::string str) {
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
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
    std::cout << "Number of uppercase vowels in the string is: " << result << std::endl;
    return 0;
}