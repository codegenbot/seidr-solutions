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

string sort_numbers(string numbers){
    map<int, string> rev_map;
    for (const auto& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    vector<int> num_list;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        num_list.push_back(num_map[token]);
    }

    sort(num_list.begin(), num_list.end());

    string sorted_numbers;
    for (const auto& num : num_list) {
        sorted_numbers += rev_map[num] + " ";
    }

    sorted_numbers.pop_back(); // Remove the extra space at the end
    return sorted_numbers;
}