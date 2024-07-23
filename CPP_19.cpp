map<string, int> numberMap = {{"zero", 0},
                                  {"one", 1},
                                  {"two", 2},
                                  {"three", 3},
                                  {"four", 4},
                                  {"five", 5},
                                  {"six", 6},
                                  {"seven", 7},
                                  {"eight", 8},
                                  {"nine", 9}};

    map<int, string> reverseMap;
    for (auto const &pair : numberMap) {
        reverseMap[pair.second] = pair.first;
    }

    vector<int> sortedNumbers;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        sortedNumbers.push_back(numberMap[token]);
    }

    sort(sortedNumbers.begin(), sortedNumbers.end());

    string result = "";
    for (int num : sortedNumbers) {
        result += reverseMap[num] + " ";
    }

    return result;
}