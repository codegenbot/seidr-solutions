#include <algorithm>
#include <cassert>
#include <vector>

int search(const vector<int>& lst) {
    int res = -1;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            res = std::max(res, num);
        }
    }
    return res;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    // Add more test cases if needed
    return 0;
}