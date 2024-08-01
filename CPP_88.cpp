vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;

    int sum = array[0] + array[array.size() - 1];
    vector<int> result = array;

    if (sum % 2 == 0)
        std::sort(result.begin(), result.end(), std::greater<int>());
    else
        std::sort(result.begin(), result.end());

    return result;
}