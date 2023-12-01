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
    std::cin >> str >> substring;
    
    int result = how_many_times(str, substring);
    std::cout << result << std::endl;
    
    return 0;
}