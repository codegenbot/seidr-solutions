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
    string result = "";
    map<int, string> rev_map;
    
    for (string::size_type i = 0; i < numbers.size(); i += 5) {
        string num_str = numbers.substr(i, 5);
        rev_map[num_map[num_str]] = num_str;
    }
    
    for (const auto& pair : rev_map) {
        result += pair.second + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}