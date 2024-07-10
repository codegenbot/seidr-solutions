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
    string result;
    vector<pair<int, string>> num_vec;
    
    stringstream ss(numbers);
    string num_str;
    while (ss >> num_str) {
        num_vec.push_back({num_map[num_str], num_str});
    }
    
    sort(num_vec.begin(), num_vec.end());
    
    for (const auto& num : num_vec) {
        result += num.second + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}