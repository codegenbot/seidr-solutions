#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 4), {243, 3, 2, 1}));
    assert(issame(maximum({-1, -2, -100, -5, 0}, 3), {0, -1, -2}));
    assert(issame(maximum({1, 2, 3, 4, 5}, 5), {5, 4, 3, 2, 1}));
    
    return 0;
}