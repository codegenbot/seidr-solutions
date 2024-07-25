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
    
    string number;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == ' ') {
            reverse_map[number_map[number]] = number;
            number = "";
        } else {
            number += numbers[i];
        }
    }
    reverse_map[number_map[number]] = number;
    
    for (auto& pair : reverse_map) {
        result += pair.second + " ";
    }
    
    return result;
}