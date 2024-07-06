bool move_one_ball(vector<int> arr) {
    int max = *max_element(arr.begin(), arr.end());
    for (int i : arr) {
        if (i > max) return false;
        max = i;
    }
    return true;
}