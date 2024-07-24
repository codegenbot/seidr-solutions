map<string, int> num_map = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    map<int, string> rev_num_map;
    string result = "";
    string temp = "";
    for (char c : numbers) {
        if (c == ' ') {
            rev_num_map[num_map[temp]] = temp;
            temp = "";
        } else {
            temp += c;
        }
    }
    rev_num_map[num_map[temp]] = temp;

    for (auto it = rev_num_map.begin(); it != rev_num_map.end(); ++it) {
        result += it->second + " ";
    }

    return result;
}