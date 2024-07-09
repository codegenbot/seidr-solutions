#include <vector>
#include <algorithm>

bool areEqual(std::vector<int> a, std::vector<int> b) {
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
    assert(areEqual(sort_array({2,4,8,16,32}), {2, 4, 8, 16, 32}));
    return 0;
}