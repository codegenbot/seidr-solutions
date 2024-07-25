#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int i = 0;
    while (i < arr.size() - 1 && arr[i] <= arr[i + 1]) {
        i++;
    }
    return i == arr.size() - 1;
}