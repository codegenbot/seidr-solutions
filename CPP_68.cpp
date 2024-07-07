Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    if(arr.empty()) return result;

    int min_even_value = INT_MAX;
    int min_even_index = -1;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < min_even_value) {
            min_even_value = arr[i];
            min_even_index = i;
        }
    }

    if(min_even_value != INT_MAX)
        result = {min_even_value, min_even_index};
    
    return result;
}