map<string, int> number_map{
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
    map<int, string> inverse_map;
    string result = "";
    string current_number = "";
    for (char c : numbers) {
        if (c != ' ') {
            current_number += c;
        } else {
            inverse_map[number_map[current_number]] = current_number;
            current_number = "";
        }
    }
    inverse_map[number_map[current_number]] = current_number;

    for (auto const& pair : inverse_map) {
        result += pair.second + " ";
    }
    return result.substr(0, result.length() - 1);
}