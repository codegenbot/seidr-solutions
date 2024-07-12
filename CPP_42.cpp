```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i: l) {
        result.push_back(i+1);
    }
    return result;
}

int main() {
    assert(issame({6,3,6,3,4,4,10,1,124}, incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}));
    return 0;
}