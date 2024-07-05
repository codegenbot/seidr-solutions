#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

using namespace std;

vector<int> pluck(vector<int> arr) {
    int smallest_even = INT_MAX;
    int index = -1;
    for(int i = 0; i < arr.size(); ++i) {
        if(arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }
    if(index == -1) {
        return {};
    }
    return {smallest_even, index};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(pluck({7, 9, 7, 1}), {}));
    assert (issame(pluck({7, 4, 2, 1}), {2, 2}));
    assert (issame(pluck({8, 2, 3, 6}), {2, 1}));

    cout << "All test cases passed!" << endl;
    return 0;
}