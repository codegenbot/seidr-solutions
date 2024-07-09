#include <string>
#include <cassert>
#include <algorithm>

bool issame(const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b) {
    return a == b;
}

std::pair<std::string, std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    return {result, result == std::string(result.rbegin(), result.rend()) ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), std::make_pair("", "True")));
    return 0;
}