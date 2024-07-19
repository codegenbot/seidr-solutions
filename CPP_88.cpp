```cpp
#include <vector>
#include <algorithm>

bool same(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++) if(a[i]!=b[i]) return false;
    return true;
}

vector<int> sort_array(vector<int> arr) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(),sorted_arr.end());
    return sorted_arr;
}

int main() {
    assert(same(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}