```cpp
#include <initializer_list>

#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& words, const std::string& sub) {
    std::vector<std::string> result;
    for (const auto& word : words) {
        if (word.find(sub) != std::string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

bool issame(const std::string& a, const std::string& b) {
    bool same = true;
    size_t len = std::min(a.size(), b.size());
    for (size_t i = 0; i < len; ++i) {
        if (std::tolower(a[i]) != std::tolower(b[i])) {
            same = false;
            break;
        }
    }
    return same;
}

bool same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (!issame(a[i], b[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<std::string> vec1 = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> vec2 = {"grunt", "trumpet", "prune", "gruesome"};

    assert(same(vec1, filter_by_substring({vec1}, "run")));

    return 0;
}