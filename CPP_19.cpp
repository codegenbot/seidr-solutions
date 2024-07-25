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
    string result;
    map<int, string> reverse_map;
    string word;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == ' ') {
            reverse_map[number_map[word]] = word;
            word.clear();
        } else {
            word += numbers[i];
        }
    }
    reverse_map[number_map[word]] = word;

    for (auto const& pair : reverse_map) {
        result += pair.second + " ";
    }

    return result;
}