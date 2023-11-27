bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int index = (minIndex + i) % n;
        if (arr[index] != i + 1) {
            count++;
        }
    }
    
    return count <= 1;
}