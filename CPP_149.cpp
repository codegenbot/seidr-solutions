```cpp
#include <algorithm>
#include <vector>
#include <string>
#include <assert.h>

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& list) {
    std::vector<std::string> result;
    for (const auto& str : list) {
        if (str.size() > 0) {
            bool first = true;
            for (char c : str) {
                if (first) {
                    first = false;
                } else {
                    result.push_back(std::string(1, c));
                }
            }
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(const std::vector<std::string>& list1, const std::vector<std::string>& list2) {
    if (list1.size() != list2.size()) return false;
    std::sort(list1.begin(), list1.end());
    std::sort(list2.begin(), list2.end());
    return list1 == list2;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}