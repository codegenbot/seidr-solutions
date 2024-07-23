#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    int changes = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            changes++;
        }
    }

    return changes - 1;