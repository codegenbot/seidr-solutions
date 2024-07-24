```
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
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

assert(sorted_list_sum(std::vector<std::vector<std::string>>({{"aaaa", "bbbb", "dd", "cc"}})) == 2);