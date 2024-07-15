map<string, int> numMap = {
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
    vector<string> numWords;
    stringstream ss(numbers);
    string word;
    while (ss >> word) {
        numWords.push_back(word);
    }

    sort(numWords.begin(), numWords.end(), [&](const string &a, const string &b) {
        return numMap[a] < numMap[b];
    });

    string result;
    for (const auto &word : numWords) {
        result += word + " ";
    }
    result.pop_back(); // Remove extra space at the end
    return result;
}