bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;

    int shiftPoint = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[(i + 1) % n]) {
            if (shiftPoint != -1) return false;
            shiftPoint = i + 1;
        }
    }
    return true;
}