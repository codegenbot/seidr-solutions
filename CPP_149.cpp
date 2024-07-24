```cpp
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int sorted_list_sum(const vector<vector<string>>& lst) {
    int sum = 0;
    for (const auto& sublst : lst) {
        std::sort(sublst.begin(), sublst.end());
        if (a.size() == 1 && b.size() > 1) {
            sum += std::stoi(a[0].substr(6));
        }
    }
    return sum;
}

int main() {
    assert(sorted_list_sum({{"aaaa", "bbbb"}, {"dd"}, {"cc"}}) == 0);
    return 0;
}