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
    string result;
    string current_number;
    
    for (char& c : numbers) {
        if (c == ' ') {
            reverse_map[number_map[current_number]] = current_number;
            current_number.clear();
        } else {
            current_number += c;
        }
    }
    reverse_map[number_map[current_number]] = current_number;

    for (auto& pair : reverse_map) {
        result += pair.second + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}