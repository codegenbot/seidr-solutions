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
    map<int, string> rev_map;
    for (const auto& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }
    
    string result;
    for (const auto& pair : rev_map) {
        size_t pos;
        while ((pos = numbers.find(pair.second)) != string::npos) {
            result += pair.second + " ";
            numbers.erase(pos, pair.second.size());
        }
    }
    
    result.pop_back(); // Remove the trailing space
    return result;
}