Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallestEven = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }

    if (smallestEven != INT_MAX) {
        result = {smallestEven, index};
    } else {
        result = {};
    }

    return result;
}