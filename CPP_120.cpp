#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert (issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}));
    assert (issame(maximum({4, 8, 2, 10, 5}, 3) , {10,8,5}));
    assert (issame(maximum({9, 4, 1, 7, 3}, 4) , {9,7,4,3}));
    assert (issame(maximum({6, 9, 2, 3}, 2) , {9,6}));
    assert (issame(maximum({5, 1, 6, 10}, 1) , {10}));
    assert (issame(maximum({}, 3) , {}));
    
    return 0;
}