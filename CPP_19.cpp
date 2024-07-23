map<string, int> numberMap = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
    {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers){
    map<int, string> reverseNumberMap;
    string result = "";
    
    string number;
    size_t pos = 0;
    while ((pos = numbers.find(' ')) != string::npos) {
        number = numbers.substr(0, pos);
        numbers.erase(0, pos + 1);
        reverseNumberMap[numberMap[number]] = number;
    }
    
    for (const auto& pair : reverseNumberMap) {
        result += pair.second + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}