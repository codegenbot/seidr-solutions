#include <vector>
#include <string>

bool bf(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int code(const std::string& str1, const std::string& str2) {
    std::vector<std::string> result;
    for (char c : str1) {
        bool found = false;
        for (const auto& s : result) {
            if (s.find(c) != std::string::npos) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(std::string(1, c));
        }
    }
    for (char c : str2) {
        bool found = false;
        for (const auto& s : result) {
            if (s.find(c) != std::string::npos) {
                found = true;
                break;
            }
        }
        if (!found) {
            return 0; // strings are not "bf" to each other
        }
    }
    return 1; // strings are "bf" to each other
}

int main() {
    std::cout << "Output: " << code("Jupiter", "Makemake") << std::endl;
    assert(code("Jupiter", "Makemake") == 0);
}