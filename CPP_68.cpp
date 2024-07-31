vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallest = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            index = i;
        }
    }

    if (index != -1) {
        result.push_back(smallest);
        result.push_back(index);
    }

    return result;
}