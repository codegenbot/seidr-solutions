vector<int> pluck(vector<int> arr){
    int min_val = INT_MAX;
    int min_idx = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < min_val) {
            min_val = arr[i];
            min_idx = i;
        }
    }
    if (min_idx == -1) {
        return {};
    }
    return {min_val, min_idx};
}