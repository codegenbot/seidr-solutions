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
    stringstream ss(numbers);
    string token;
    vector<string> tokens;

    while (ss >> token) {
        tokens.push_back(token);
    }

    sort(tokens.begin(), tokens.end(), [&](const string &a, const string &b) {
        return number_map[a] < number_map[b];
    });

    string result;
    for (const auto &token : tokens) {
        result += token + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}