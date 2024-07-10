bool move_one_ball(vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        if (arr[left] <= arr[right]) {
            return false; // No need to shift, already sorted
        }
        left++;
    }
    return true;
}