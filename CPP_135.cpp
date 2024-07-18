int can_arrange(vector<int> arr){
    int largest_idx = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            largest_idx = i - 1;
        }
    }
    return largest_idx;
}