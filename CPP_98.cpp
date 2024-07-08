#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'F' && s[i] <= 'U')) {
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
    std::cout << "Upper case letters count: " << result << std::endl;
    return 0;