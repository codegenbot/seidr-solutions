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

    int start = 0;
    for (int i = 0; i <= numbers.size(); ++i) {
        if (i == numbers.size() || numbers[i] == ' ') {
            string current_number = numbers.substr(start, i - start);
            reverse_map[number_map[current_number]] = current_number;
            start = i + 1;
        }
    }

    for (const auto& pair : reverse_map) {
        result += pair.second + " ";
    }

    return result.substr(0, result.size() - 1);
}