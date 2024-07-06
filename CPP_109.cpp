#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;
    int max_element = *max_element(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > max_element - arr.size() + i) {
            return false;
        }
    }
    return true;
}