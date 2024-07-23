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
    string result = "";
    map<int, string> sorted_numbers;
    
    string number;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == ' ') {
            sorted_numbers[number_map[number]] = number;
            number = "";
        } else {
            number += numbers[i];
        }
    }
    sorted_numbers[number_map[number]] = number;
    
    for (auto it = sorted_numbers.begin(); it != sorted_numbers.end(); ++it) {
        result += it->second + " ";
    }
    
    return result;
}