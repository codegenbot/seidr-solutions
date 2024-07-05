#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    assert(smallest_change({1, 2, 3, 2, 1}) == 0);
    assert(smallest_change({1, 2, 3, 4, 5}) == 2);
    cout << "All test cases pass" << endl;
    return 0;
}