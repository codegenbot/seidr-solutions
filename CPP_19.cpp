int convertToInt(const string& word) {
    static map<string, int> wordToInt = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}
    };
    return wordToInt[word];
}

string sort_numbers(string numbers) {
    vector<string> words;
    istringstream iss(numbers);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    sort(words.begin(), words.end(), [&] (const string& a, const string& b) {
        return convertToInt(a) < convertToInt(b);
    });
    string sortedNumbers;
    for (const string& word : words) {
        if (!sortedNumbers.empty()) sortedNumbers += " ";
        sortedNumbers += word;
    }
    return sortedNumbers;
}