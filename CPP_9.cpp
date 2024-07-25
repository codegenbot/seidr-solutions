#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_val = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        max_val = max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

int main() {
    assert(areEqual(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}