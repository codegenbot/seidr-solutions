```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (sorted_list_sum({a[i], b[i]}).size() != 1) {
            return false;
        }
    }
    return true;
}

int sorted_list_sum(vector<string> list) {
    vector<int> sums;
    for (const auto& str : list) {
        int sum = 0;
        for (char c : str) {
            sum += c - 'a' + 1;
        }
        sums.push_back(sum);
    }
    return *std::max_element(sums.begin(), sums.end());
}

int main() {
    std::vector<std::string> v1 = {"aaaa", "bbbb", "dd", "cc"};
    std::vector<std::string> v2 = {"cc", "dd", "aaaa", "bbbb"};

    assert(issame(sorted_list_sum({v1, v2}), v2)); 
}