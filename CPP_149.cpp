```
#include <algorithm>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;

    for (int i = 0; i < a.size(); i++) {
        auto sumA = sortedSum({a[i], b[i]});
        auto sumB = sortedSum({b[i], a[i]});
        if (sumA[0] != sumB[0]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> sortedSum(const std::vector<std::string>& lst) {
    std::vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}

int main() {
    assert(isSame(sortedSum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}