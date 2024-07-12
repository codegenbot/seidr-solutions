#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        throw std::runtime_error("Vectors are not the same size");
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            throw std::runtime_error("Vectors contain different elements");
        }
    }
    return true;
}

std::string reverse_delete(const std::string& s1, const std::string& s2) {
    for (int i = 0; i < s2.length(); i++) {
        while (s1.find(s2.substr(i, 1)) != std::string::npos)
            s1.erase(s1.find(s2.substr(i, 1)), 1);
    }
    return s1;
}

int main() {
    try {
        std::vector<std::string> v = {"", "True"};
        assert(issame({reverse_delete("mamma", "mia")}, v));
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }
}