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
    string result = "";
    map<int, string> sorted_numbers;
    
    string number = "";
    for (char c : numbers) {
        if (c == ' ') {
            sorted_numbers[number_map[number]] = number;
            number = "";
        } else {
            number += c;
        }
    }
    sorted_numbers[number_map[number]] = number;
    
    for (const auto& pair : sorted_numbers) {
        result += pair.second + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}