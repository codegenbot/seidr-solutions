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

string sort_numbers(string numbers) {
    map<int, string> reverse_map;
    string result = "";
    string current_num = "";
    
    for (char c : numbers) {
        if (c == ' ') {
            reverse_map[number_map[current_num]] = current_num;
            current_num = "";
        } else {
            current_num += c;
        }
    }
    
    reverse_map[number_map[current_num]] = current_num;
    
    for (auto it = reverse_map.begin(); it != reverse_map.end(); ++it) {
        result += it->second + " ";
    }
    
    return result;
}