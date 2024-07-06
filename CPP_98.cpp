#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && isupper(s[i])) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << "Input a string: ";
    std::string input;
    std::cin >> input;
    int output = count_upper(input);
    std::cout << "Output: " << output << std::endl;
    assert(count_upper("EEEE") == 2);
}