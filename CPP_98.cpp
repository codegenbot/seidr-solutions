#include <iostream>
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
    assert(count_upper("EEEE") == 2);
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    int result = count_upper(str);
    std::cout << "The number of upper vowels at even positions is: " << result << std::endl;
    return 0;
}