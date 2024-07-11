Here is the completed code:

vector<pair<int, int>> pluck(vector<int>& arr) {
    pair<int, int> result = {{INT_MAX, -1}};
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < result.first) {
            result = {{arr[i], i}};
        } else if (arr[i] % 2 == 0 && arr[i] == result.first) {
            result = {{arr[i], i}};
        }
    }
    return result.empty() ? vector<pair<int, int>>{} : {result};
}