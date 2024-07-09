Here is the solution:

vector<int> pluck(vector<int> arr) {
    int smallest = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            index = i;
        }
    }
    
    if (smallest == INT_MAX)
        return {};
    else
        return {(int)smallest, index};
}