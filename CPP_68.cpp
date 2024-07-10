Here is the solution:

vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    int min_even = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < min_even) {
            min_even = arr[i];
            index = i;
        }
    }

    return {{min_even, index}};
}