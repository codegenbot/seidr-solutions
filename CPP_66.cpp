#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1;
        }
    }
    return sum % 26;
}

int main() {
    int result = digitSum("You arE Very Smart");
    return 0;
}