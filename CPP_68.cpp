#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> pluck(vector<int> arr) {
    int minEven = -1;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (minEven == -1 || arr[i] < minEven) {
                minEven = arr[i];
                minIndex = i;
            }
        }
    }

    if (minEven == -1) {
        return {};
    } else {
        return {minEven, minIndex};
    }
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(pluck({7, 9, 7, 1}), {}));
    assert (issame(pluck({7, 8, 7, 1}), {8, 1}));
    assert (issame(pluck({10, 7, 8, 1}), {8, 2}));
    cout << "All tests passed!" << endl;
    return 0;
}