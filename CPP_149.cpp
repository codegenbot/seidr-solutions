```c++
#include <initializer_list>

#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector b) {
    if (a.size() != size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        std::vector<std::string> temp = {a[i], b[i]};
        std::sort(temp.begin(), temp.end());
        if (temp[0] != temp[1]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> v) {
    std::sort(v.begin(), v.end());
    return v;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"ccc", "dd", "aaaa", "bbbb"}) == true);
    return 0;
}