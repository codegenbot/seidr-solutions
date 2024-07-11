```cpp
#include <string>
#include <cctype>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || 
            std::tolower(c) == 'u' || std::tolower(c) == 'y') {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);  
    int result = vowels_count(input);
    std::cout << "Number of vowels: " << result << std::endl;
    return 0;
}