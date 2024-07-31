#include <vector>
#include <algorithm>
using namespace std;

bool move_one_ball(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        vector<int> temp = arr;
        rotate(temp.rbegin(), temp.rbegin() + 1, temp.rend());
    }
    return false;
}