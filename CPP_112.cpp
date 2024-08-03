#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::string a, std::string b) {
    return a.compare(b) == 0;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return {result, result == reverse_result ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia")[0], "") && reverse_delete("mamma", "mia")[1] == "True");
    return 0;
}