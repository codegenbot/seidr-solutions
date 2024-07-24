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
    string result = "";
    map<int, string> sortedNumbers;

    size_t start = 0, end;
    while ((end = numbers.find(" ", start)) != string::npos) {
        string numStr = numbers.substr(start, end - start);
        sortedNumbers[numMap[numStr]] = numStr;
        start = end + 1;
    }
    sortedNumbers[numMap[numbers.substr(start))] = numbers.substr(start);

    for (const auto& entry : sortedNumbers) {
        result += entry.second + " ";
    }

    result.pop_back(); // Remove extra space at the end
    return result;
}