```cpp
#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        char ch = std::toupper(c);
        if (!std::isdigit(ch)) {
            sum += static_cast<int>(ch) - 'A' + 1; 
        } else {
            sum += ch - '0';
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    std::cout << digitSum("Your string here") << std::endl;
    return 0;
}