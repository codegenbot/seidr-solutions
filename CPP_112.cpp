#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::pair<std::string, bool> checkPalindrome(std::vector<std::string> a, std::vector<std::string> b) {
    std::string result = "";
    for (auto ch : a[0]) {
        if (b[0].find(ch) == std::string::npos) {
            result += ch;
        }
    }
    return {result, result == std::string(result.rbegin(), result.rend())};
}

int main() {
    assert(checkPalindrome({"mamma"}, {"mia"}) == std::make_pair("", true));
    return 0;
}