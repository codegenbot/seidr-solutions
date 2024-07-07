Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    if (arr.empty()) return result;

    int smallest_even_index = -1;
    int smallest_even_value = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even_value) {
            smallest_even_value = arr[i];
            smallest_even_index = i;
        }
    }

    result.push_back(smallest_even_value);
    result.push_back(smallest_even_index);

    return result;