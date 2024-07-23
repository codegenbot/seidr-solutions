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
    vector<string> num_strings;
    stringstream ss(numbers);
    string token;
    
    while (ss >> token) {
        num_strings.push_back(token);
    }
    
    sort(num_strings.begin(), num_strings.end(), [&](const string& a, const string& b) {
        return num_map[a] < num_map[b];
    });
    
    string result = "";
    for (const string& num_str : num_strings) {
        result += num_str + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}