#include <iostream>
#include <string>

int main() {
    std::cout << (string_xor("0101", "0000") == "1011") << std::endl;
    return 0;

    std::string string_xor(const std::string& a, const std::string& b) {
        std::string result = "";
        for (int i = 0; i < a.length(); i++) {
            if ((a[i] - '0') ^ (b[i] - '0')) {
                result += "1";
            } else {
                result += "0";
            }
        }
        return result;
    }
}