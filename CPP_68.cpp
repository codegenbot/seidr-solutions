vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int minEvenVal = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenVal) {
            minEvenVal = arr[i];
            result.clear();
            result.push_back(arr[i]);
            result.push_back(i);
        }
    }

    return result;
}