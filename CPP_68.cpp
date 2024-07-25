Here is the completed code:

vector<int> pluck(vector<int> arr) {
    int smallestEvenValue = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            index = i;
        }
    }
    return {{smallestEvenValue, index}};
}