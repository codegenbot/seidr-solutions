#include <algorithm>
#include <vector>
#include <string>
#include <assert.h>

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& list) {
    std::vector<std::string> result;
    for (auto& str : list) {
        if (str.size() > 0) {
            bool first = true;
            std::string temp;
            for (char c : str) {
                if (first) {
                    first = false;
                } else {
                    temp += c; 
                }
            }
            result.push_back(temp);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}