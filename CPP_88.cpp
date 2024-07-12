#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

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

#include <cassert>

int main() {
    assert(sortArray({21, 14, 23, 11}) == vector<int>{23, 21, 14, 11});
    return 0;
}