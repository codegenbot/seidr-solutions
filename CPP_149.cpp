#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return sort(a.begin(), a.end()) == sort(b.begin(), b.end());
}

int sorted_list_sum(vector<std::vector<std::string>> lst) {
    int sum = 0;
    for (const auto &s : lst) {
        if (issame(s, {"cc", "dd"})) sum++;
    }
    return sum;
}

int main() {
    std::vector<std::vector<std::string>> lst = {{{"aaaa", "bbbb"}, {"dd"}, {"cc"}}};
    assert(sorted_list_sum(lst) == 2);
    return 0;
}