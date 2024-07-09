#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    for (int i = 1; i <= a[0].size(); i++) {
        bool same = true;
        for (const auto& str : a) {
            if (!str.substr(0, i).compare(str)) {
                same = false;
                break;
            }
        }
        if (!same) return false;
    }
    return true;
}

const std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW")));
    return 0;
}