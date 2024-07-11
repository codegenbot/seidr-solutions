Here is the solution:

vector<pair<int, int>> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    vector<pair<int, int>> result;
    pair<int, int> smallest = {INT_MAX, 0};

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest.first) {
            smallest = {{arr[i]}, i};
        }
    }

    return smallest;
}