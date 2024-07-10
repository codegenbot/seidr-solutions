#include <algorithm>
#include <string>
#include <vector>
#include <initializer_list>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
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

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& v) {
    std::sort(v.begin(), v.end());
    return v;
}