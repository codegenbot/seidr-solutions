```cpp
#include <string>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1;
        }
    }
    return sum;

}

int main() {
    std::string str;
    std::cin >> str;
    int result = digitSum(str);
    std::cout << result << std::endl;
    return 0;
}