vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    int first = array.front();
    int last = array.back();
    vector<int> sorted_array = array;

    if ((first + last) % 2 == 0) {
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }

    return sorted_array;
}