map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

string sort_numbers(string numbers) {
    map<int, string> rev_num_map;
    for (const auto& pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }

    vector<int> num_vals;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        num_vals.push_back(num_map[token]);
    }

    sort(num_vals.begin(), num_vals.end());

    string result;
    for (const auto& val : num_vals) {
        result += rev_num_map[val] + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}