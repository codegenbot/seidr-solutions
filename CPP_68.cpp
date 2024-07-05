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
    assert(issame(pluck({4, 2, 6, 8}), {2, 1}));
    assert(issame(pluck({1, 3, 5, 7, 2}), {2, 4}));
    assert(issame(pluck({-12, -4, -6, -24}), {-24, 3}));
    return 0;
}