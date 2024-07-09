#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int next_smallest(vector<int> lst) {
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > v[0]) return v[i];
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    cout << next_smallest({10, 2, 6, 5, 7, 3, 4, 1});
    return 0;
}