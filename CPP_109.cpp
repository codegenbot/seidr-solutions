bool move_one_ball(vector<int> arr) {
    int maxElement = *max_element(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > maxElement - i) {
            return false;
        }
    }
    return true;
}