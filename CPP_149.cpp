```cpp
#include <string>
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (stoi(a[i]) != stoi(b[i])) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::vector<std::string>>& lst) {
    std::vector<int> sums;
    for (const auto& str : lst[0]) {
        int sum = 0;
        for (int i = 1; i < lst.size(); i++) {
            if (find(lst[i].begin(), lst[i].end(), str) != lst[i].end()) {
                sum += stoi(str);
                break;
            }
        }
        sums.push_back(sum);
    }
    
    std::vector<std::string> result;
    for (int sum : std::vector<int>(std::sort(sums.begin(), sums.end()))) {
        for (const auto& str : lst[0]) {
            if (stoi(str) == sum) {
                result.push_back(str);
                break;
            }
        }
    }
    
    return result;
}

int main() {
    std::vector<std::string> lst = {{"aaaa"}, {"bbbb"}, {"dd"}, {"cc"}};
    assert(issame(sorted_list_sum({{ "aaaa" }, { "bbbb" }, { "dd" }, { "cc" }}), { "cc", "dd", "aaaa", "bbbb" }));
    return 0;
}