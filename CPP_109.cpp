bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0)
        return true;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1])
            continue;
        
        bool found = false;
        for (int j = i; !found && j > 0; j--) {
            if (arr[j - 1] <= arr[j]) {
                swap(arr[j], arr[0]);
                found = true;
            }
        }
        
        if (!found)
            return false;
    }
    
    return true;
}