bool move_one_ball(vector<int> arr){
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    
    int rotations = min_index;
    for (int i = 0; i < n; i++) {
        int index = (i + rotations) % n;
        if (arr[index] != i + 1) {
            return false;
        }
    }
    
    return true;
}