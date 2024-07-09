#include <vector>
#include <string>

bool issame(const std::vector<std::string>& s1, const std::vector<std::string>& s2) {
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i)
        if (s1[i] != s2[i]) return false;
    return true;
}

int main() {
    std::vector<std::string> strings = {"dog", "cat", "bird"};
    bool issame(strings, strings);
}