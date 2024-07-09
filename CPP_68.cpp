vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int minEvenValue = INT_MAX;
    int minValueIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minValueIndex = i;
        }
    }

    result.push_back(minEvenValue);
    result.push_back(minValueIndex);

    return result;
}