#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    if(s1.length() != s2.length()) return false;
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] != s2[i]) return false;
    }
    return true;
}

int sorted_list_sum(const std::vector<std::vector<std::string>>& lst) {
    int sum = 0;
    for(const auto& list : lst) {
        bool found = false;
        for(int i = 0; i < list.size(); i++) {
            if(i > 0 && issame(list[i], list[0])) {
                found = true;
                break;
            }
        }
        if(!found) sum++;
    }
    return sum;
}

int main() {
    std::vector<std::vector<std::string>> lst = {{{"aaaa", "bbbb"}, {"dd"}, {"cc"}}};
    assert(sorted_list_sum(lst) == 2);
    return 0;
}