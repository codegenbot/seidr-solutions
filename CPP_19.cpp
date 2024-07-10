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
    map<int, string> rev_map;
    string current = "";
    for (char c : numbers) {
        if (c == ' ') {
            rev_map[num_map[current]] = current;
            current = "";
        } else {
            current += c;
        }
    }
    rev_map[num_map[current]] = current;

    string result = "";
    for (auto it = rev_map.begin(); it != rev_map.end(); ++it) {
        result += it->second + " ";
    }
    return result.substr(0, result.size() - 1);
}