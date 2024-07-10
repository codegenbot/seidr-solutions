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

string sort_numbers(string numbers){
    string result = "";
    map<int, string> sortedNums;

    for (int i = 0; i < numbers.size(); i += 5) {
        string currNum = numbers.substr(i, 5);
        sortedNums[numMap[currNum]] = currNum;
    }

    for (auto const& pair : sortedNums) {
        result += pair.second + " ";
    }

    return result;
}