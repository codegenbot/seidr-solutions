#include <string>
#include <vector>

std::string string_xor(std::string a, std::string b) {
    std::vector<char> result;
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result.push_back('1');
        } else {
            result.push_back('0');
        }
    }
    return std::string(result.begin(), result.end());
}