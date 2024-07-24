#include <algorithm>
#include <vector>

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
            if (find(lst[j].begin(), lst[j].end(), lst[0][i]) != lst[j].end()) {
                sum += stoi(lst[0][i]);
                break;
            }
        }
        sums.push_back(std::to_string(sum)); 
    } 

    // Sort each inner vector
    for (auto& vec : lst) {
        std::sort(vec.begin(), vec.end());
    }

    return {sums}; 
}

int main(int argc, char** argv) {
    std::vector<std::string> lst = {{"aaaa"}, {"bbbb"}, {"dd"}, {"cc"}};
    std::vector<std::vector<std::string>> input;
    input.push_back(lst);
    assert(issame(sorted_list_sum(input), { "cc", "dd", "aaaa", "bbbb" }));
    return 0;
}