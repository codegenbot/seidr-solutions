#include <string>
#include <cassert>
#include <algorithm>
#include <vector>

bool assert_pair_equal(std::pair<std::string, std::string> a, std::pair<std::string, std::string> b) {
    return a == b;
}

std::pair<std::string, std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reversed = result;
    std::reverse(result_reversed.begin(), result_reversed.end());
    return {result, result == result_reversed ? "True" : "False"};
}

int main() {
    assert(assert_pair_equal(reverse_delete("mamma", "mia"), std::make_pair("", "True")));
}