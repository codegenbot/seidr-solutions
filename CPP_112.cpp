#include <string>
#include <cassert>
#include <algorithm>

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
    auto result = reverse_delete("mamma", "mia");
    assert(result == std::make_pair("", "True"));
}