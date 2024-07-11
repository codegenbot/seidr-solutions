#include <vector>
#include <algorithm>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<int> sums;
    for (int i = 0; i < lst.size(); i++) {
        int sum = 0;
        for (char c : lst[i]) {
            sum += c - '0';
        }
        sums.push_back(sum);
    }
    
    std::sort(sums.begin(), sums.end());
    
    return {};
}