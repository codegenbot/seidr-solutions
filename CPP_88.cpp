#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>
using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    vector<int> result = array;
    int sum = array.front() + array.back();
    if (sum % 2 == 0) {
        sort(result.begin(), result.end(), greater<int>());
    } else {
        sort(result.begin(), result.end());
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    assert(issame(sort_array({1, 2, 3, 4, 5}), {5, 4, 3, 2, 1}));
    assert(issame(sort_array({5, 4, 3, 2, 1}), {5, 4, 3, 2, 1}));
    assert(issame(sort_array({7, 1, 3, 2, 4, 6, 5}), {1, 2, 3, 4, 5, 6, 7}));
    assert(issame(sort_array({}), {}));
    assert(issame(sort_array({3}), {3}));
    return 0;
}