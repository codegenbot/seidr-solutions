#include <algorithm>
#include <vector>
#include <string>

bool compare(const std::string &a, const std::string &b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    } else {
        return a < b;
    }
}

int main() {
    assert(issame(sortedListSum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (sortedListSum({a[i], b[i]})[0] != sortedListSum({b[i], a[i]})[0]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> sortedListSum(const std::vector<std::string> &lst) {
    std::vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(), compare);

    return result;
}