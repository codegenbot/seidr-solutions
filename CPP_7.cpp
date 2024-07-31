#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    std::vector<std::string> strings;
    for (int i = 0; i < n; ++i) {
        std::string s;
        getline(cin, s); 
        strings.push_back(s);
    }

    std::string substring;
    getline(cin, substring);

    if (!issame({strings}, filter_by_substring(strings, substring))) {
        assert(false);  // your test failed
    }

    return 0;
}