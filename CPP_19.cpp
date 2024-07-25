map<string, int> num_map = {
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
    map<int, string> rev_num_map;

    for (auto const &pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }

    for (int i = 0; i < numbers.size(); i += 5) {
        if (i != 0) result += " ";
        result += rev_num_map[num_map[numbers.substr(i, 5)]];
    }

    return result;
}