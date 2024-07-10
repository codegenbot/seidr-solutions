Here is the completed code:

vector<pair<int, int>> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    int smallest_even = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }

    return {{smallest_even, index}};
}