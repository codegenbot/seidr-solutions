```cpp
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int sorted_list_sum(vector<vector<string>> lst) {
    int sum = 0;
    for (auto &list : lst) {
        std::sort(list.begin(), list.end());
        if (list.size() > 1 && issame(list[0], list[1])) {
            sum++;
        }
    }
    return sum;
}

int main() {
    vector<vector<string>> lst = {{"aaaa", "bbbb"}, {"dd"}, {"cc"}};
    assert(sorted_list_sum(lst) == 2);
    return 0;
}