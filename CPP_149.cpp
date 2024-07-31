#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst){
    sort(lst.begin(), lst.end());
    return lst;
}

int main(){
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), vector<string>{"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}