map<string, int> number_map = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    stringstream ss(numbers);
    string word;
    vector<string> num_strings;
    
    while (ss >> word) {
        num_strings.push_back(word);
    }
    
    sort(num_strings.begin(), num_strings.end(), [&](const string& a, const string& b) {
        return number_map[a] < number_map[b];
    });
    
    string result;
    for (const auto& num_str : num_strings) {
        result += num_str + " ";
    }
    
    return result;
}