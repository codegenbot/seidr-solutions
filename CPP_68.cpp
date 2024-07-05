#include <vector>
#include <cassert>

using namespace std;

vector<int> pluck(vector<int> arr) {
    int minEvenValue = -1;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (minEvenValue == -1 || arr[i] < minEvenValue) {
                minEvenValue = arr[i];
                minIndex = i;
            }
        }
    }
    
    if (minEvenValue == -1) {
        return {};
    } else {
        return {minEvenValue, minIndex};
    }
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    assert(issame(pluck({7, 8, 6, 1}), {6, 2}));
    assert(issame(pluck({4, 5, 6, 2}), {2, 3}));
    assert(issame(pluck({4, 4, 4, 4}), {4, 0}));
    return 0;
}