vector<int> pluck(vector<int> arr) {
    int smallest_even = -1;
    int smallest_even_index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)) {
            smallest_even = arr[i];
            smallest_even_index = i;
        }
    }
    
    if (smallest_even_index != -1) {
        return {smallest_even, smallest_even_index};
    } else {
        return {};
    }
}