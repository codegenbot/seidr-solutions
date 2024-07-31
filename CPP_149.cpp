#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst){
    std::sort(lst.begin(), lst.end());
    return lst;
}

int main(){
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), std::vector<std::string>{"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}