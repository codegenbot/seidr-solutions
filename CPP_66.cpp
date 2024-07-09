#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    int sum = digitSum(s);

    std::cout << "The sum of the uppercase letters is: " << sum << std::endl;

    return 0;
}

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; // Convert to ASCII value and subtract 'A'
        }
    }
    return sum;
}