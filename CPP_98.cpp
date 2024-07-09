#include <iostream>
#include <cctype>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && std::isupper(s[i])) &&
            (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 2);
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    int result = count_upper(input);
    std::cout << "Count of uppercase vowels at even positions: " << result << "\n";
    return 0;
}