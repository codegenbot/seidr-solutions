#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::string& a, const std::string& b) {
    std::string result = "";
    for (char ch : a) {
        if (b.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return result == result_reverse;
}

int main() {
    assert(issame("mamma", "mia") == true);
    return 0;
}