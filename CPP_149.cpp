#include <vector>
#include <string>

bool issame(const vector<string>& a) {
    if (a.empty()) {
        return true;
    }
    string target = a[0];
    for(int i=1; i<a.size(); i++) {
        if(a[i] != target) {
            return false;
        }
    }
    return true;
}

int sorted_list_sum(const vector<vector<string>>& lst) {
    int sum = 0;
    for (const auto& sublst : lst) {
        std::sort(sublst.begin(), sublst.end());
        if (issame({{"hello", "world"}})) {
            sum += std::stoi(sublst[1].substr(7));
        }
    }
    return sum;
}