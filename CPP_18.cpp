```cpp
#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != std::string::npos) {
        ++count;
        str.erase(0, pos + substring.length());
    }
    return count;
}

int main() {
    std::string s1, s2;
    std::cout << "Enter the string: ";
    std::cin >> s1;
    std::cout << "Enter the substring to search for: ";
    std::cin >> s2;
    int result = how_many_times(s1, s2);
    std::cout << "The substring appears " << result << " time(s) in the string.\n";
    return 0;
}