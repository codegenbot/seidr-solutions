#include <vector>
#include <cassert>
using namespace std;

vector<int> pluck(vector<int> arr) {
    int smallest_even = -1;
    int index = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (smallest_even == -1 || arr[i] < smallest_even) {
                smallest_even = arr[i];
                index = i;
            }
        }
    }
    
    if (smallest_even == -1) return {};
    return {smallest_even, index};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    assert(issame(pluck({2, 9, 7, 1}), {2, 0}));
    return 0;
}