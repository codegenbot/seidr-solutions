#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(issame({1, 2, 3, -23, 243, -400, 0}, {1, 2, 3, -23, 243, -400, 0}));
    assert(!issame({1, 2, 3, -23, 243, -400, 0}, {1, 2, 3, -23, 243, -400, 1}));
    
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == vector<int>{});
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 1) == vector<int>{243});
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 3) == vector<int>{243, 3, 2});
    
    return 0;
}