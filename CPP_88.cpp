vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 1) {
        return vector<int>(array.begin(), array.end());
    } else {
        vector<int> copy = array;
        sort(copy.begin(), copy.end(), greater<int>());
        return copy;
    }
}