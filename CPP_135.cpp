int can_arrange(vector<int> arr) {
    int max_index = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i-1]) {
            max_index = i;
            break;
        }
    }
    return max_index;
}