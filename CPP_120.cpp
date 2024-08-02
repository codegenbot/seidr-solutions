#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(const vector<int>& arr, int k) {
    vector<int> temp = arr;
    sort(temp.begin(), temp.end(), greater<int>());
    temp.resize(k);
    return temp;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), {243, 3, 2}));
    return 0;
}