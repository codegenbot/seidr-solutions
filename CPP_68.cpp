Here is the solution:

vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    int smallestEvenValue = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            smallestIndex = i;
        }
    }

    return {{smallestEvenValue, smallestIndex}};
}