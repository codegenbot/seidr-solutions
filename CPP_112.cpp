#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == std::string::npos) {
            result += s[i];
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    bool is_palindrome = (result == reverse_result);
    std::vector<std::string> output = { result, (is_palindrome ? "True" : "False") };
    return output;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), { "", "True" }));
    // Additional test cases...
    return 0;
}