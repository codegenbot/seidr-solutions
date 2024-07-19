#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    a = sort_array(a);
    b = sort_array(b);
    
    return a == b;
}

using namespace std;

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    
    return 0;
}