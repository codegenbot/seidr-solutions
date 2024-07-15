#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool is_same(vector<int> a, vector<int> b){
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> strange_sort_list(vector<int> v){
    sort(v.begin(), v.end());
    return v;
}

int main(){
    assert(is_same(strange_sort_list({111111}), {111111}));
    return 0;
}