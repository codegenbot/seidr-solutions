bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            minIndex = i;
            break;
        }
    }
    
    if (minIndex == -1) {
        return false;
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[(minIndex + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}