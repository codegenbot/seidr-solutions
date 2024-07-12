#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    assert(areEqual(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    
    return 0;
}