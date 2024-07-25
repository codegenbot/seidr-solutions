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
    map<int, string> revMap;
    string result = "";
    string temp = "";
    for (char c : numbers) {
        if (c != ' ') {
            temp += c;
        } else {
            int num = numMap[temp];
            revMap[num] = temp;
            temp = "";
        }
    }
    int num = numMap[temp];
    revMap[num] = temp;

    for (auto it = revMap.begin(); it != revMap.end(); ++it) {
        result += it->second + " ";
    }
    return result;
}