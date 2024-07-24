#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            return true;
        }
    }
    return false;
}