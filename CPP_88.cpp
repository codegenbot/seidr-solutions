\#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool isEqual(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sortArray(vector<int> array) {
    if (array.empty()) {
        return array;
    }

    if ((array.front() + array.back()) % 2 == 0) {
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }

    return array;
}

int main() {
    assert(isEqual(sortArray({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}