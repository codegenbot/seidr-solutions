#include <string>
#include <cassert>
#include <iostream>

int how_many_times(std::string str, std::string substring) {
    if (substring.empty()) {
        return 0;
    }
    
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        ++count;
        ++pos;
    }
    
    return count;
}

int main() {
    std::string str, substring;
    std::cin >> str >> substring;
    
    std::cout << how_many_times(str, substring) << std::endl;
    
    return 0;
}