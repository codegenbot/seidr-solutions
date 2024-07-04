vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;

    vector<int> result = array;
    int sum = array.front() + array.back();

    if (sum % 2 == 0) {
        sort(result.rbegin(), result.rend());
    } else {
        sort(result.begin(), result.end());
    }

    return result;
}