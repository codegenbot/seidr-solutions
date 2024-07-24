#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (stoi(a[i]) != stoi(b[i])) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::vector<std::string>>& lst) {
    std::vector<int> sums;
    for (int i = 0; i < lst[0].size(); i++) {
        int sum = 0;
        for (int j = 1; j < lst.size(); j++) {
            bool found = false;
            for (const auto& str : lst[j]) {
                if (str == lst[0][i]) {
                    sum += stoi(str);
                    found = true;
                    break;
                }
            }
            if (!found) {
                sums.push_back(std::to_string(sum));
                sum = 0;
            } else {
                sum = 0;
                sums.push_back(std::to_string(sum));
            }
        }
    }

    for (auto& vec : lst) {
        std::sort(vec.begin(), vec.end());
    }

    return {sums}; 
}

int main(int argc, char** argv) {
    std::vector<std::string> lst = {"aaaa", "bbbb", "dd", "cc"};
    std::vector<std::vector<std::string>> input;
    input.push_back(lst);
    assert(issame(sorted_list_sum(input), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}