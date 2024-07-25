vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array.back();
    if (sum % 2 == 1) {
        sort(array.begin(), array.end());
    } else {
        sort(array.rbegin(), array.rend());
    }
    return array;
}