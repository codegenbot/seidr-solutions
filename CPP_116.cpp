#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

std::vector<std::vector<int>> sort_array(std::initializer_list<int> il) {
    std::vector<int> arr(il.begin(), il.end());
    std::sort(arr.begin(), arr.end());
    return {{arr}};
}

int main() {
    assert(issame({2,4,8,16,32}, {2, 4, 8, 16, 32}));
    return 0;
}