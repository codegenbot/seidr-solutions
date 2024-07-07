Here is the solution:

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (result.empty() || arr[i] < result[0])) {
            result = {arr[i], i};
        }
    }
    return result;
}