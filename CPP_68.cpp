vector<int> pluck(vector<int> arr) {
    int min_even_val = INT_MAX;
    int min_index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < min_even_val) {
            min_even_val = arr[i];
            min_index = i;
        }
    }
    
    if (min_index == -1) {
        return {};
    }
    
    return {min_even_val, min_index};
}