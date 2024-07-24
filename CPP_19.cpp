map<string, int> num_map = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

string sort_numbers(string numbers) {
    map<int, string> rev_num_map;
    for (const auto& pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }

    vector<int> num_indices;
    string result;

    istringstream iss(numbers);
    string num_str;
    while (iss >> num_str) {
        num_indices.push_back(num_map[num_str]);
    }

    sort(num_indices.begin(), num_indices.end());

    for (const int& index : num_indices) {
        result += rev_num_map[index] + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}