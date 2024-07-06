```cpp
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> bf(const std::string& a, const std::string& b) {
    std::vector<std::string> result;
    for(char c : a) {
        if(std::find(b.begin(), b.end(), c) != b.end()) {
            result.push_back(std::string(1, c));
        }
    }
    return result;
}

int main() {
    std::cout << "Output: " << (issame("Jupiter", "Makemake") ? "True" : "False") << std::endl;
}