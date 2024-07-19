#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

using std::vector;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return vector<int>(arr.begin(), arr.begin() + std::min(k, static_cast<int>(arr.size())));
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), vector<int>()));
    
    return 0;
}