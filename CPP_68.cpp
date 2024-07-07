Here is the completed code:

vector<int> pluck(vector<int> arr) {
    int minEvenVal = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenVal) {
            minEvenVal = arr[i];
            minIndex = i;
        }
    }

    vector<int> result;
    if (minIndex != -1) {
        result.push_back(minEvenVal);
        result.push_back(minIndex);
    } else {
        result.push_back(0);
        result.push_back(-1);
    }

    return result;
}