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

    vector<string> number_strings;
    stringstream ss(numbers);
    string temp;

    while (ss >> temp) {
        number_strings.push_back(temp);
    }

    sort(number_strings.begin(), number_strings.end(), [&number_map](const string& a, const string& b) {
        return number_map[a] < number_map[b];
    });

    string result;
    for (const auto& str : number_strings) {
        result += str + " ";
    }

    return result;
}