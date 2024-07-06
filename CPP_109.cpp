bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[0]) return true;
    }
    return false;
}