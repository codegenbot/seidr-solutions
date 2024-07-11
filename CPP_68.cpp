Here is the completed code:

vector<int> pluck(vector<int> arr) {
    int min_even = INT_MAX;
    int min_index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < min_even) {
            min_even = arr[i];
            min_index = i;
        }
    }

    return {(min_even != INT_MAX) ? min_even : 0, min_index};
}