#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    assert(equal(maximum({1, 2, 3, -23, 243, -400, 0}, 0).begin(), maximum({1, 2, 3, -23, 243, -400, 0}, 0).end(), {}).begin());
    
    return 0;
}