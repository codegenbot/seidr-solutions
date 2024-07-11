bool move_one_ball(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    if (n == 1) {
        return true;
    }
    
    int min_index = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    
    return (arr[min_index] == arr[(min_index + 1) % n]);
}