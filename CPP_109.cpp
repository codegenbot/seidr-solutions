#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;

    int break_point = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[(i + 1) % n]) {
            if (break_point != -1) return false;
            break_point = i;
        }
    }
    return true;
}