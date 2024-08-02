bool move_one_ball(vector<int> arr) {
    int min = *min_element(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != min) return false;
    }
    return true;
}