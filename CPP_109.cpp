bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;
    int n = arr.size(), shift_point = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[(i + 1) % n]) {
            if (shift_point != -1) return false;
            shift_point = i;
        }
    }
    return true;
}