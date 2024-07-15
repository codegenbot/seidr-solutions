map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

string sort_numbers(string numbers){
    map<int, string> revNumMap;
    for(auto const& pair : numMap) {
        revNumMap[pair.second] = pair.first;
    }
    
    string result;
    string token;
    size_t pos = 0;
    while ((pos = numbers.find(' ')) != string::npos) {
        token = numbers.substr(0, pos);
        result += revNumMap[numMap[token]] + " ";
        numbers.erase(0, pos + 1);
    }
    result += revNumMap[numMap[numbers]];
    
    return result;
}