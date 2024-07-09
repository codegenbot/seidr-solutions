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
    map<int, string> reverse_map;
    string result = "";
    
    int start = 0;
    for (int i = 0; i <= numbers.size(); ++i) {
        if (i == numbers.size() || numbers[i] == ' ') {
            string num_str = numbers.substr(start, i - start);
            reverse_map[number_map[num_str]] = num_str;
            start = i + 1;
        }
    }
    
    for (const auto& pair : reverse_map) {
        result += pair.second + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}