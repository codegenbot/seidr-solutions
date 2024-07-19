#include <cassert>
#include <vector>
#include <initializer_list>

int nextSmallest(vector<int> arr) {
    int smallest = INT_MAX;
    for (int i : arr) {
        if (i > smallest) {
            return i;
        }
        if (i < smallest) {
            smallest = i;
        }
    }
    return -1; // or handle this case as per your requirement
}

int runTest() {
    assert(nextSmallest({-35, 34, 12, -45}) == -35);
    return 0;
}