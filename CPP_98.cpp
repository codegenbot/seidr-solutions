```cpp
#include <iostream>
#include <string>

int count_upper(const std::string &s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && isupper(s[i])) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    int result = count_upper(s); 
    std::cout << "Number of uppercase vowels at even positions: " << result << std::endl;
    return 0;
}