```cpp
#include <string>
#include <cctype>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && std::isupper(s[i])) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::cin >> s; 
    int result = count_upper(s); 
    std::cout << "Number of uppercase letters that are vowels and at even positions: " << result << "\n";
    return 0;
}