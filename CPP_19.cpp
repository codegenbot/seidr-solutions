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
    map<int, string> sorted_numbers;
    string result = "";
    
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
    
    for (auto it = sorted_numbers.begin(); it != sorted_numbers.end(); ++it) {
        result += it->second + " ";
    }
    
    return result;
}