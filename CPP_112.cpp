#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::pair<std::string, bool> issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string result = "";
    for (auto ch : a[0]) {
        if (b[0].find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::reverse(result.begin(), result.end());
    return {result, result == result};
}

int main() {
    assert(issame({"mamma"}, {"mia"}) == std::make_pair("", true));
    return 0;
}