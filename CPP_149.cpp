```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> vec) {
    if (a.size() != vec.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        std::vector<std::string> temp = {a[i], vec[i]};
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

std::vector<std::string> vec = {"aaaa", "bbbb", "dd", "cc"};
assert(issame(sorted_list_sum(vec), {"ccc", "dd", "aaaa", "bbbb"}));
return 0;