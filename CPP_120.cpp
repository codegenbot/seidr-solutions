#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool vector_comparison(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    assert(vector_comparison(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));

    return 0;
}