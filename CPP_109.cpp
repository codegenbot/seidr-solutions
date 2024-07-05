#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
        if (count > 1) {
            return false;
        }
    }
    return true;
}