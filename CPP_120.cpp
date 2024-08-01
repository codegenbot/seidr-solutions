#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <functional>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == vector<int>{});
    return 0;
}