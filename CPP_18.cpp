```cpp
#include <iostream>
#include <string>

int how_many_times(const std::string& str, const std::string& substring);

int main_function() {
    std::string str, substring;

    while(true) {
        std::cout << "Enter the string: ";
        std::getline(std::cin, str);

        if (!str.empty()) break;
        std::cout << "Error: The input string is empty. Please try again." << std::endl;
    }

    while(true) {
        std::cout << "Enter substring: ";
        std::getline(std::cin, substring);

        if (!substring.empty()) break;
        std::cout << "Error: The input substring is empty. Please try again." << std::endl;
    }
    
    while((str.empty() || substring.empty())) {
        if (str.empty()) 
            std::cout << "Error: The input string is empty. Please try again." << std::endl;
        else
            std::cout << "Error: The input substring is empty. Please try again." << std::endl;

        std::cout << "Enter the string: ";
        std::getline(std::cin, str);

        if (!str.empty()) break;
        std::cout << "Enter substring: ";
        std::getline(std::cin, substring);
    }

    int result = how_many_times(str, substring);
    std::cout << "The substring appears " << result << " times." << std::endl;

    return 0;
}

int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find(substring)) != std::string::npos) {
        ++count;
        pos += substring.size();
    }

    return count;
}