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
    for (auto const& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    string result;
    for (auto const& pair : rev_map) {
        size_t pos = numbers.find(pair.second);
        while (pos != string::npos) {
            result += pair.second + " ";
            pos = numbers.find(pair.second, pos + 1);
        }
    }

    if (!result.empty()) {
        result.pop_back(); // Remove the extra space at the end
    }

    return result;
}