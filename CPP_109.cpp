bool move_one_ball(vector<int> arr) {
    int last = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= last) return false;
        last = arr[i];
    }
    return true;
}