#include <cassert>
#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    for (auto c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1;
        }
    }
    return sum % 26;

}

int main() {
    assert(digitSum("You arE Very Smart") == 14);
}