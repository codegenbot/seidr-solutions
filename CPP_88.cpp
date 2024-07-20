#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> sort_array(vector<int> array) {
    if(array.empty()) return array;
    if((array.front() + array.back()) % 2 == 0)
        sort(array.rbegin(), array.rend());
    else
        sort(array.begin(), array.end());
    return array;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}