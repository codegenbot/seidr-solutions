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
    map<int, string> sortedNumMap;
    
    size_t start = 0;
    size_t end = numbers.find(" ");
    while (end != string::npos) {
        string numStr = numbers.substr(start, end - start);
        start = end + 1;
        end = numbers.find(" ", start);
        
        int num = numMap[numStr];
        sortedNumMap[num] = numStr;
    }
    
    for (const auto& pair : sortedNumMap) {
        result += pair.second + " ";
    }
    
    return result;
}