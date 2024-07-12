#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a == b);
}

std::string reverse_delete(const std::string& s1, const std::string& s2) {
    for (int i = 0; i < s2.length(); i++) {
        while (s1.find(s2.substr(i, 1)) != std::string::npos)
            s1.erase(s1.find(s2.substr(i, 1)), 1);
    }
    return s1;
}

int main() {
    std::vector<std::string> v = {"", "True"};
    assert(issame(std::vector<std::string>({reverse_delete("mamma", "mia")}), v));
    return 0;
}