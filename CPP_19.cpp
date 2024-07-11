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
    map<int, string> sortedNums;

    string currNum = "";
    for (char c : numbers) {
        if (c == ' ') {
            sortedNums[numMap[currNum]] = currNum;
            currNum = "";
        } else {
            currNum += c;
        }
    }

    sortedNums[numMap[currNum]] = currNum;

    for (auto it = sortedNums.begin(); it != sortedNums.end(); it++) {
        result += it->second;
        result += " ";
    }

    result.pop_back(); // remove extra space at the end
    return result;
}