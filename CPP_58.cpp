#include <algorithm>
#include <vector>
#include <cassert>
#include <initializer_list>

bool issame(std::initializer_list<int> a, std::initializer_list<int> b) {
    std::vector<int> vec_a(a);
    std::vector<int> vec_b(b);
    
    std::sort(vec_a.begin(), vec_a.end());
    std::sort(vec_b.begin(), vec_b.end());
    
    return vec_a == vec_b;
}

int main() {
    assert(issame({4, 3, 2, 8}, {}));
    
    return 0;
}