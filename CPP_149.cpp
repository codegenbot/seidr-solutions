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
    for (int i = 0; i < lst[0][0].size(); i++) {
        int sum = 0;
        for (int j = 1; j < lst.size(); j++) {
            bool found = false;
            for (const auto& str : lst[j]) {
                if (str == lst[0][0][i]) {
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

    std::vector<std::string> temp;
    for (auto& vec : lst) {
        temp.insert(temp.end(), vec.begin(), vec.end());
        std::sort(temp.begin(), temp.end());
        vec.clear();
        vec.insert(vec.end(), temp.begin(), temp.end());
        temp.clear();
    }
    
    std::vector<std::string> result;
    for (const auto& str : sums) {
        if (stoi(str) % 2 == 0) {
            result.push_back("even");
        } else {
            result.push_back("odd");
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<std::string>> input = {{"aaaa"}, {"bbbb"}, {"dd"}, {"cc"}};
    if (!issame(sorted_list_sum(input), {"even", "even", "odd", "even"})) {
        return 1;
    }
    return 0;
}