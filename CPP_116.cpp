#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int ones_a = __builtin_popcount(a);
        int ones_b = __builtin_popcount(b);

        if (ones_a == ones_b)
            return a < b;
        else
            return ones_a < ones_b;
    });
    return arr;
}
vector<int> arr = {2,4,8,16,32};
sort_array(arr);
assert(issame(arr, {2, 4, 8, 16, 32}));