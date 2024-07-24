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

string sort_numbers(string numbers){
    vector<string> numStrings;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        numStrings.push_back(token);
    }

    sort(numStrings.begin(), numStrings.end(), [&](const string &a, const string &b) {
        return numberMap[a] < numberMap[b];
    });

    string result = "";
    for (const string &numStr : numStrings) {
        result += numStr + " ";
    }

    return result;
}