#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    std::vector<int> a_copy = a;
    std::vector<int> b_copy = b;
    std::sort(a_copy.begin(), a_copy.end());
    std::sort(b_copy.begin(), b_copy.end());
    return std::equal(a_copy.begin(), a_copy.end(), b_copy.begin());
}

int main(){
    assert(issame({21, 14, 23, 11}, {23, 21, 14, 11}));
    
    return 0;
}