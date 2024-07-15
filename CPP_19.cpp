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
    map<int, string> revNumMap;
    
    for (auto it : numMap){
        revNumMap[it.second] = it.first;
    }
    
    for (auto it : revNumMap){
        if (numbers.find(it.second) != string::npos){
            result += it.second + " ";
        }
    }
    
    return result;
}