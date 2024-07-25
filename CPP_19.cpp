string sort_numbers(const string &numbers) {
    map<string, int> numberMap = {
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

    vector<string> numVec;
    istringstream iss(numbers);
    string word;
    while (iss >> word) {
        numVec.push_back(word);
    }

    sort(numVec.begin(), numVec.end(), [&](const string &a, const string &b) {
        return numberMap[a] < numberMap[b];
    });

    string sortedNumbers;
    for (const auto &num : numVec) {
        sortedNumbers += num + ' ';
    }

    return sortedNumbers;
}