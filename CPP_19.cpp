string sort_numbers(string numbers){
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

    vector<string> tokens;
    string token;
    stringstream ss(numbers);

    while (ss >> token) {
        tokens.push_back(token);
    }

    sort(tokens.begin(), tokens.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });

    string sorted_numbers;
    for (const auto &num_str : tokens) {
        sorted_numbers += num_str + " ";
    }

    return sorted_numbers;
}