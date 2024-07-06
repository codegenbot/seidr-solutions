Here is the solution:

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    int smallest_value = INT_MAX;
    int index = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_value) {
            smallest_value = arr[i];
            index = i;
        }
    }

    if (smallest_value != INT_MAX) {
        result.push_back(smallest_value);
        result.push_back(index);
    }

    return result;
}