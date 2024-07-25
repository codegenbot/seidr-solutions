Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int minEvenValue = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    if (minEvenValue != INT_MAX) {
        result = {minEvenValue, minIndex};
    } else {
        result = {};
    }

    return result;
}