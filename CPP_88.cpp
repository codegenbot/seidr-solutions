#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    
    int sum = array.front() + array.back();
    vector<int> result = array;

    if (sum % 2 == 0) {
        sort(result.rbegin(), result.rend());
    } else {
        sort(result.begin(), result.end());
    }

    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));
    assert(issame(sort_array({2, 7, 4, 8}), {8, 7, 4, 2}));
    return 0;
}