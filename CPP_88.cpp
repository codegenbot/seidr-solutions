#include <iostream>
#include <vector>
#include <algorithm>
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

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));
    assert(issame(sort_array({22, 14, 23, 11}), {23, 22, 14, 11}));
    cout << "All test cases passed!" << endl;
    return 0;
}