```cpp
#include <iostream>
#include <string>

int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;
    std::string temp = str;
    while ((pos = temp.find(substring)) != std::string::npos) {
        count++;
        temp.erase(pos, substring.length());
    }
    return count;
}

int main() {
    std::string str, substring;
    std::cout << "Enter the string: ";
    std::getline(std::cin, str);
    std::cout << "Enter the substring: ";
    std::getline(std::cin, substring);
    int result = how_many_times(str, substring);
    std::cout << "The substring appears " << result << " times." << std::endl;
    return 0;
}