int find_smallest_even_index(vector<int>& arr) {
    int smallest_even = -1;
    int smallest_even_index = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)) {
            smallest_even = arr[i];
            smallest_even_index = i;
        }
    }

    return smallest_even_index;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    
    int smallest_even_index = find_smallest_even_index(arr);
    
    if (smallest_even_index != -1) {
        result.push_back(arr[smallest_even_index]);
        result.push_back(smallest_even_index);
    }
    
    return result;
}