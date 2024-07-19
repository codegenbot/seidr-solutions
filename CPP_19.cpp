map<string, int> numeral_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

string sort_numbers(string numbers) {
    vector<string> numerals;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        numerals.push_back(token);
    }

    sort(numerals.begin(), numerals.end(), [&](const string &a, const string &b) {
        return numeral_map[a] < numeral_map[b];
    });

    string result;
    for (const auto &numeral : numerals) {
        result += numeral + " ";
    }

    return result.substr(0, result.size() - 1);
}