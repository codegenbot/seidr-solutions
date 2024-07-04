#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> pluck(vector<int> arr) {
    int minEvenValue = INT_MAX;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    if (minIndex == -1) {
        return {};
    }
    
    return {minEvenValue, minIndex};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    assert(issame(pluck({7, 2, 4, 1}), {2, 1}));
    assert(issame(pluck({12, 9, 8, 1, 10, 6}), {6, 5}));
    return 0;
}