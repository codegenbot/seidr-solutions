#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a.size() == b.size());
}

std::vector<std::string> reverse_delete(const std::string& s1, const std::string& s2) {
    std::vector<std::string> result;
    std::string temp = s1;
    for (int i = 0; i < s2.length(); i++) {
        while (temp.find(s2.substr(i, 1)) != std::string::npos)
            temp.erase(temp.find(s2.substr(i, 1)), 1);
    }
    result.push_back(std::string(temp).reverse());
    return {result};
}

int main() {
    assert(issame({reverse_delete("mamma", "mia")}, {{"mam"}});
    return 0;
}