#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using std::vector;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst){
    std::sort(lst.begin(), lst.end());
    return lst;
}

int main(){
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) , {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}