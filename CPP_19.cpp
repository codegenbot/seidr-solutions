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
    string current_number = "";
    
    for (char c : numbers) {
        if (c == ' ') {
            sorted_numbers[number_map[current_number]] = current_number;
            current_number = "";
        } else {
            current_number += c;
        }
    }
    
    sorted_numbers[number_map[current_number]] = current_number;
    
    for (auto& pair : sorted_numbers) {
        result += pair.second + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}