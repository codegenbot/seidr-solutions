Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEvenValue = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            index = i;
        }
    }

    result.push_back(minEvenValue);
    result.push_back(index);

    return result;
}