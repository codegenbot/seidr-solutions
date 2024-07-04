#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> pluck(const vector<int>& arr) {
    int minEvenValue = INT_MAX;
    int minIndex = -1;
    
    for(int i = 0; i < arr.size(); ++i) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    if(minIndex == -1) {
        return {};
    }
    
    return {minEvenValue, minIndex};
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    assert(issame(pluck({4, 9, 7, 1}), {4, 0}));
    assert(issame(pluck({7, 9, 2, 2, 8}), {2, 2}));
    assert(issame(pluck({3, 3, 3}), {}));
    cout << "All test cases passed!" << endl;
    return 0;
}