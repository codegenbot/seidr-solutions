```cpp
#include <string>
#include <iostream>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        pos += substring.length();
    }
    return count;

}

int main() { 
    std::string str;
    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    std::string substring;
    std::cout << "Enter substring: ";
    std::getline(std::cin, substring);
    
    if (str.empty()) {
        std::cout << "Error: The input string is empty." << std::endl;
    } else if (substring.empty()) {
        std::cout << "Error: The input substring is empty." << std::endl;
    } else {
        int result = how_many_times(str, substring);
        std::cout << "The substring appears " << result << " times." << std::endl;
    }
    return 0;
}