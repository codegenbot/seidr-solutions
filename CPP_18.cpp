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
    if (!(std::cin >> str).fail()) {
        std::getline(std::cin, str);
    } else {
        std::cout << "Error: The input is invalid." << std::endl;
    }

    std::string substring;
    std::cout << "Enter substring: ";
    if (!(std::cin >> substring).fail()) {
        std::getline(std::cin, substring);
    } else {
        std::cout << "Error: The input is invalid." << std::endl;
    }
    
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