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
    map<int, string> rev_map;
    for (string::size_type i = 0; i < numbers.size(); i += 5) {
        rev_map[number_map[numbers.substr(i, 4)]] = numbers.substr(i, 4);
    }

    string result = "";
    for (const auto& pair : rev_map) {
        result += pair.second + " ";
    }
    return result;
}