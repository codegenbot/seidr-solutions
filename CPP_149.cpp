#include <vector>
#include <string>

bool issame(const vector<std::string>& a, const vector<std::string>& b) {
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

int sorted_list_sum(const std::vector<std::vector<std::string>>& lst) {
    int sum = 0;
    for (const auto& sublst : lst) {
        std::sort(sublst.begin(), sublst.end());
        if (issame(std::vector<std::string>{{"hello", "world"}}, sublst)) {
            sum += std::stoi(sublst[1].substr(7));
        }
    }
    return sum;
}