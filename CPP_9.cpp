#include <iostream>
#include <vector>
#include <algorithm>

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = INT_MIN;

    for (int num : numbers) {
        if (num > max) {
            max = num;
        }
        result.push_back(max);
    }

    return result;
}

int main() {
    assert(same(rolling_max({3, 2, 3, 100, 3}) ,{3, 3, 3, 100, 100}));
    return 0;
}