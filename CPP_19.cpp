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
    string result;
    map<int, string> sortedNums;
    
    string num;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == ' ') {
            sortedNums[numMap[num]] = num;
            num = "";
        } else {
            num += numbers[i];
        }
    }
    sortedNums[numMap[num]] = num;
    
    for (const auto& pair : sortedNums) {
        result += pair.second + " ";
    }
    
    return result;
}