bool move_one_ball(vector<int> arr) {
    int i = 0;
    while (i < arr.size() - 1) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
        i++;
    }
    return true;
}