#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'I' && s[i] <= 'O') || (s[i] >= 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    int result = count_upper(input);
    std::cout << "The number of upper characters is: " << result << std::endl;

    return 0;
}