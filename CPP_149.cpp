```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int sorted_list_sum(std::vector<std::vector<std::string>> lst) {
    int sum = 0;
    for (auto &sublist : lst) {
        std::sort(sublist.begin(), sublist.end());
        for (const auto &str : sublist) {
            sum += str.size();
        }
    }
    return sum;
}

int main() {
    std::vector<std::string> input = {"aaaa", "bbbb", "dd", "cc"};
    assert(issame({{input}}, {{"cc","dd","aaaa","bbbb"}}));
    return 0;
}