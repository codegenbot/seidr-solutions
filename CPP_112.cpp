#include <string>
#include <cassert>
#include <algorithm>
#include <vector>

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
    assert(reverse_delete("mamma", "mia") == std::make_pair("", "True"));
}