string sort_numbers(const string& input) {
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

    vector<string> numbers;
    stringstream ss(input);
    string token;

    while (ss >> token) {
        numbers.push_back(token);
    }

    sort(numbers.begin(), numbers.end(), [&](const string& a, const string& b) {
        return number_map[a] < number_map[b];
    });

    string result;
    for (const string& num : numbers) {
        result += num + " ";
    }

    return result;
}