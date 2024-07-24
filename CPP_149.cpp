#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
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
        if (issame({{"hello", "world"}}, std::vector<std::string>(sublst.begin() + 1, sublst.end()))) {
            sum += std::stoi(sublst[0].substr(6));
        }
    }
    return sum;
}

int main() {
    std::vector<std::string> lst = {"aaaa", "bbbb", "dd", "cc"};
    assert(sorted_list_sum({{lst[0], lst[1]}, {lst[2]}, {lst[3]}}) == 2);
    return 0;
}