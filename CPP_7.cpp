#include <vector>
#include <string>

bool same(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::string> strings = {"hello", "world", "hellloworld"};
    std::vector<std::string> result = filter_by_substring(strings, "ll");
    
    for (auto& s : result) {
        if (same(s, "hello")) {
            std::cout << s << std::endl;
        }
    }

    return 0;
}