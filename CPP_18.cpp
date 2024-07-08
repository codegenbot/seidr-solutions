#include <iostream>
#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        pos += 1; 
    }
    return count;
}

int main() {
    std::string s, sub;
    std::cout << "Enter the string: ";
    std::cin >> s;
    std::cout << "Enter the substring: ";
    std::cin >> sub;
    int count = how_many_times(s, sub);
    std::cout << "The substring appears " << count << " times." << std::endl;
    return 0;
}