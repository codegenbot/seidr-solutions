#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> sorted_list_sum(vector<string>& lst);

int main(){
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}