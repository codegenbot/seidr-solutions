#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool solve(initializer_list<int> arr) {
    vector<int> balls(arr);
    int n = balls.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(balls.begin(), balls.end())) {
            return true;
        }
        rotate(balls.rbegin(), balls.rbegin() + 1, balls.rend());
    }
    return false;
}

int main() {
    assert(solve({1, 2, 3, 4}) == true);
    assert(solve({3, 4, 1, 2}) == false);

    return 0;
}