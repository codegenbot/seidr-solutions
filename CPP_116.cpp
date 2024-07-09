#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    assert(issame(sort_array({1,3,5}), {1, 3, 5}));
    assert(issame(sort_array({-2,0,4}), {-2, 0, 4}));
    return 0;
}