map<string, int> number_map = {
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
    vector<string> number_strings;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        number_strings.push_back(token);
    }
    
    sort(number_strings.begin(), number_strings.end(), [&](const string& a, const string& b) {
        return number_map[a] < number_map[b];
    });
    
    string result;
    for (const string& num_str : number_strings) {
        result += num_str + " ";
    }
    
    return result;
}