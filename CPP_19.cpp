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
    
    map<int, string> rev_map;
    for (auto const& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }
    
    vector<int> num_values;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        num_values.push_back(num_map[token]);
    }
    
    sort(num_values.begin(), num_values.end());
    
    string result = "";
    for (int num : num_values) {
        result += rev_map[num] + " ";
    }
    
    return result;
}