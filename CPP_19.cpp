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
    map<int, string> rev_map;
    for (const auto& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    vector<int> sorted_nums;
    stringstream ss(numbers);
    string num_str;
    while (ss >> num_str) {
        sorted_nums.push_back(num_map[num_str]);
    }

    sort(sorted_nums.begin(), sorted_nums.end());

    string result;
    for (const auto& num : sorted_nums) {
        result += rev_map[num] + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}