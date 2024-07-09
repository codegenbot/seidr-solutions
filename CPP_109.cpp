#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    vector<int> temp = arr;
    for (int i = 0; i < n; i++) {
        sort(temp.begin(), temp.end());
        if (temp == arr) return false;
        temp = rightShift(temp);
    }
    return true;
}

vector<int> rightShift(vector<int> v) {
    int n = v.size();
    vector<int> result(n, 0);
    for (int i = 1; i < n; i++) {
        result[i - 1] = v[i];
    }
    result[n - 1] = v[0];
    return result;
}