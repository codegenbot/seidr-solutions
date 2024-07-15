#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) {
        return true;
    }

    int n = arr.size();
    int min_index = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    return (min_index == n - 1 || arr[0] <= arr[n - 1]);
}