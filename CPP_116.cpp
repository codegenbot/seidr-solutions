#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

int main_test() {
    assert(isSame(sort_array({1, 2, 4, 8, 16, 32}), vector<int>({1, 2, 4, 8, 16, 32})));
    return 0;
}