Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return {};

    int minEven = INT_MAX;
    int idx = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            idx = i;
        }
    }

    if (minEven != INT_MAX) {
        result.push_back(minEven);
        result.push_back(idx);
    } else {
        result.push_back(0);
        result.push_back(-1); // or any other value to indicate no even values
    }

    return result;
}