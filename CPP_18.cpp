#include <iostream>
#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        count++;
        pos += substring.length();
    }
    
    return count;
}

int main() {
    std::string str, substring;
    std::cout << "Enter the original string: ";
    std::cin >> str;
    std::cout << "Enter the substring to search: ";
    std::cin >> substring;
    
    int result = how_many_times(str, substring);
    std::cout << "The substring \"" << substring << "\" appears " << result << " times in the original string." << std::endl;
    
    return 0;
}