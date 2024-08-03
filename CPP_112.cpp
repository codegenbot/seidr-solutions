#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <utility>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::pair<std::string, std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return { result, (issame(std::vector<std::string>{result}, std::vector<std::string>{result_reverse}) ? "True" : "False") };
}

int main() {
    assert(reverse_delete("mamma", "mia") == std::make_pair("", "True"));
    return 0;
}