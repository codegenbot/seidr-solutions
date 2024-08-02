#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::string result = "";
    for (const std::string& str : a) {
        for (char ch : str) {
            if (b[0].find(ch) == std::string::npos) {
                result += ch;
            }
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return result == result_reverse;
}

int main() {
    assert(issame({"mamma"}, {"mia"}) == true);
    return 0;
}