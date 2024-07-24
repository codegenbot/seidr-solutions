bool move_one_ball(vector<int> arr) {
    int max = *max_element(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}