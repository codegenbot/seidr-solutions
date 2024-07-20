vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    int minEvenValueIndex = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && i < minEvenValueIndex) {
            minEvenValueIndex = i;
            result = {arr[i], i};
        }
    }
    return result;
}