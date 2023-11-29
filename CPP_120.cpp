#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), vector<int>{}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), vector<int>{243, 3, 2}));
    assert(issame(maximum({5, 5, 5, 5, 5, 5, 5}, 5), vector<int>{5, 5, 5, 5, 5}));
    assert(issame(maximum({-1, -2, -3, -4, -5}, 2), vector<int>{-1, -2}));
    assert(issame(maximum({1, 2, 3, 4, 5}, 5), vector<int>{5, 4, 3, 2, 1}));
    
    return 0;
}