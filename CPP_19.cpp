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
    stringstream ss(numbers);
    string token;
    vector<string> tokens;
    while (ss >> token) {
        tokens.push_back(token);
    }
    sort(tokens.begin(), tokens.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });
    string result;
    for (const auto &token : tokens) {
        result += token + " ";
    }
    result.pop_back(); // Remove trailing space
    return result;
}