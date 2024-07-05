#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.rbegin(), arr.rend());
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == vector<int>{});
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 3) == vector<int>{0, 2, 243});
    cout << "All tests passed!" << endl;
    return 0;
}