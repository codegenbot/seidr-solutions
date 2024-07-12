#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::string reverse_delete(const std::string& s1, const std::string& s2) {
    std::string result = s1;
    for (int i = 0; i < s2.length(); i++) {
        while (result.find(s2.substr(i, 1)) != std::string::npos)
            result.erase(result.find(s2.substr(i, 1)), 1);
    }
    return result;
}

int main() {
    assert(issame({reverse_delete("mamma", "mia")}, {"True"}));
    return 0;
}