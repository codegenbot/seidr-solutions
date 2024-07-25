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
    string res = "";
    map<int, string> sortedNums;
    
    string num = "";
    for (char c : numbers) {
        if (c == ' ') {
            sortedNums[numMap[num]] = num;
            num = "";
        } else {
            num += c;
        }
    }
    sortedNums[numMap[num]] = num;
    
    for (auto it = sortedNums.begin(); it != sortedNums.end(); ++it) {
        res += it->second + " ";
    }
    
    res.pop_back(); // remove trailing space
    return res;
}