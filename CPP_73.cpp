#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

namespace Solution {
    int smallest_change(const std::vector<int>& arr) {
        int changes = 0;
        std::vector<int> temp = arr;
        std::reverse(temp.begin(), temp.end());
        for (int i = 0; i < arr.size(); ++i) {
            changes += (arr[i] != temp[i]);
        }
        return changes;
    }
}

using namespace Solution;

int main() {
    assert(smallest_change({0, 1}) == 1);
    return 0;
}