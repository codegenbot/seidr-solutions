#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::pair<std::string, bool> issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::string result = "";
    for(const auto& ch : a[0]) {
        if(b[0].find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse};
}

int main() {
    assert(issame({"mamma"}, {"mia"}) == std::make_pair("", true));
    return 0;
}