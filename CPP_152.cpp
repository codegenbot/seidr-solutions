#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame({1, 2, 3, 5}, {-1, 2, 3, 4}) == false);
    assert(issame({1, 2, 3, 5}, {1, 2, 3, 5}) == true);
    
    // Your other code here...
}