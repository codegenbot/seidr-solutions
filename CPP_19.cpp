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
    map<int, string> sorted_numbers;
    
    string temp = "";
    for (char c : numbers) {
        if (c != ' ') {
            temp += c;
        } else {
            sorted_numbers[num_map[temp]] = temp;
            temp = "";
        }
    }
    sorted_numbers[num_map[temp]] = temp;

    for (auto const& pair : sorted_numbers) {
        result += pair.second + " ";
    }
    
    return result;
}