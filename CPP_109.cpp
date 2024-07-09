bool move_one_ball(vector<int> arr) {
    int min_idx = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[min_idx]) {
            min_idx = i;
        }
    }
    return true;
}