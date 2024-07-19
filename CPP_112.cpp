```cpp
#include <vector>
#include <string>

std::vector<std::string> reverse_delete(const std::string& s1, const std::string& s2) {
    std::vector<std::string> result;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            result.push_back(std::string(1, s1[i]));
        }
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
}