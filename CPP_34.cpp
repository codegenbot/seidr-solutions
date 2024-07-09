#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main() {
    assert (issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    
    // Other code here

    return 0;
}