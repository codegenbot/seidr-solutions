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
    
    size_t pos = 0;
    while ((pos = numbers.find(" ")) != string::npos) {
        string numStr = numbers.substr(0, pos);
        int num = numMap[numStr];
        sortedNums[num] = numStr;
        numbers.erase(0, pos + 1);
    }
    
    sortedNums[numMap[numbers]] = numbers;
    
    for (const auto& pair : sortedNums) {
        result += pair.second + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}