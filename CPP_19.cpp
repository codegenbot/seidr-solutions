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

void sort_numbers(string numbers){
    vector<string> words;
    stringstream ss(numbers);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    sort(words.begin(), words.end(), [&](const string &a, const string &b) {
        return numberMap[a] < numberMap[b];
    });

    for (const string &word : words) {
        cout << word << " ";
    }
}