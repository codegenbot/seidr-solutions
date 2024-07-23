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
    
    size_t start = 0, end = numbers.find(" ");
    while (end != string::npos) {
        string num_str = numbers.substr(start, end - start);
        reverse_map[number_map[num_str]] = num_str;
        start = end + 1;
        end = numbers.find(" ", start);
    }
    reverse_map[number_map[numbers.substr(start)]] = numbers.substr(start);
    
    for (const auto& pair : reverse_map) {
        result += pair.second + " ";
    }
    
    return result.substr(0, result.size() - 1);
}