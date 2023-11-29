#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == vector<int>{});
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 3) == vector<int>{243, 3, 2});
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 7) == vector<int>{243, 3, 2, 1, 0, -23, -400});
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 10) == vector<int>{243, 3, 2, 1, 0, -23, -400});
    assert(maximum({}, 0) == vector<int>{});
    assert(maximum({1, 2, 3, 4, 5}, 0) == vector<int>{});
    assert(maximum({1, 2, 3, 4, 5}, 1) == vector<int>{5});
    assert(maximum({1, 2, 3, 4, 5}, 5) == vector<int>{5, 4, 3, 2, 1});
    
    return 0;
}