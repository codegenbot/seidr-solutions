#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool solve(initializer_list<int> arr) {
    vector<int> balls(arr);
    int n = balls.size();
    for (int i = 0; !is_sorted(balls.begin(), balls.end()); ++i) {
        rotate(balls.rbegin(), balls.rbegin() + 1, balls.rend());
        if (i == n - 1) {
            return false;
        }
    }
    return true;
}

int main(){
    assert(solve({1, 2, 3, 4}) == true);
    assert(solve({3, 4, 1, 2}) == false);

    return 0;
}