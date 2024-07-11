vector<int> pluck(vector<int> arr) {
    vector<int> result;

    int smallestEvenValue = -1;
    int smallestEvenIndex = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && (smallestEvenValue == -1 || arr[i] < smallestEvenValue)) {
            smallestEvenValue = arr[i];
            smallestEvenIndex = i;
        }
    }

    if (smallestEvenValue != -1) {
        result.push_back(smallestEvenValue);
        result.push_back(smallestEvenIndex);
    }

    return result;
}