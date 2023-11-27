#include <vector>
#include <algorithm>
#include <cassert>

vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int count1 = __builtin_popcount(a);
        int count2 = __builtin_popcount(b);
        if (count1 == count2) {
            return a < b;
        }
        return count1 < count2;
    });
    return arr;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(sort_vector({2,4,8,16,32}), {2, 4, 8, 16, 32}));
    return 0;
}