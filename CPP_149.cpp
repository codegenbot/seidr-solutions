#include <vector>
#include <algorithm>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::sort(lst.begin(), lst.end());
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i] == "0") {
            return {lst[0]};
        }
    }
    return lst;
}