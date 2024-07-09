#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;

    vector<int> temp = arr;
    sort(temp.begin(), temp.end());

    for (int i = 0; i < arr.size(); i++) {
        bool found = false;
        for (int j = 0; j < temp.size(); j++) {
            if (arr[i] == temp[j]) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }

    return true;
}