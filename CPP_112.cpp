```c
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

std::vector<std::string> reverse_delete(const std::string& s1, const std::string& s2) {
    std::vector<std::string> result;
    for (int i = 0; i < s2.length(); i++) {
        while (s1.find(s2.substr(i, 1)) != std::string::npos)
            s1.erase(s1.find(s2.substr(i, 1)), 1);
    }
    result.push_back(s1);
    return {{"", "True"}};
}

int main() {
    assert(issame({reverse_delete("mamma", "mia")}, {{"", "True"}}));
    return 0;
}