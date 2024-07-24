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
    
    size_t pos = 0;
    string token;
    while ((pos = numbers.find(" ")) != string::npos) {
        token = numbers.substr(0, pos);
        reverse_map[number_map[token]] = token;
        numbers.erase(0, pos + 1);
    }
    reverse_map[number_map[numbers]] = numbers;
    
    for (const auto& pair : reverse_map) {
        result += pair.second + " ";
    }
    
    return result.substr(0, result.size() - 1);
}