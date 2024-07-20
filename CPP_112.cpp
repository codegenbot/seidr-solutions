#include <string>
#include <algorithm>

bool issame(std::string a, std::string b) {
    std::string result = "";
    for (char ch : a) {
        if (b.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    return result == std::string(result.rbegin(), result.rend());
}