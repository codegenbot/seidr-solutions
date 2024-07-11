#include <string>
#include <cctype>

int vowels_count(std::string s);

int vowels_count(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) { 
        if (std::tolower(s[i]) == 'a' || std::tolower(s[i]) == 'e' || 
            std::tolower(s[i]) == 'i' || std::tolower(s[i]) == 'o' || 
            std::tolower(s[i]) == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    assert(vowels_count("ACEDY") == 3);
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = vowels_count(input);
    std::cout << "Number of vowels in the string is: " << result << std::endl;
    return 0;
}