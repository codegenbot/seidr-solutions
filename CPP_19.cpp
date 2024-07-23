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
    string result = "";
    
    size_t pos = 0;
    while ((pos = numbers.find(" ")) != string::npos) {
        string token = numbers.substr(0, pos);
        rev_map[num_map[token]] = token;
        numbers.erase(0, pos + 1);
    }
    rev_map[num_map[numbers]] = numbers;
    
    for (const auto& pair : rev_map) {
        result += pair.second + " ";
    }
    
    return result.substr(0, result.size() - 1);
}