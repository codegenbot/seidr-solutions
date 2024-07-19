#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        vector<int> result(array);
        sort(result.begin(), result.end(), greater<int>());
        return result;
    } else {
        vector<int> result(array);
        sort(result.begin(), result.end());
        return result;
    }
}

int main() {
    assert(same(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;