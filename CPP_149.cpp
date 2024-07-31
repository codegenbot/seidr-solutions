#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst){
    std::vector<std::string> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    return sorted_lst;
}

int main(){
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), std::vector<std::string>{"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}