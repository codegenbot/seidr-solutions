#include <vector>
#include <algorithm>

bool check_vectors(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

std::vector<int> sort_ints(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    assert(check_vectors(sort_ints({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    return 0;
}