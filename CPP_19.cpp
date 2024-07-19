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
    map<int, string> sorted_nums;
    
    size_t start = 0, end = numbers.find(' ');
    while (end != string::npos) {
        string num_str = numbers.substr(start, end - start);
        sorted_nums[num_map[num_str]] = num_str;
        start = end + 1;
        end = numbers.find(' ', start);
    }
    
    string num_str = numbers.substr(start);
    sorted_nums[num_map[num_str]] = num_str;
    
    for (const auto& pair : sorted_nums) {
        result += pair.second + " ";
    }
    
    return result;
}