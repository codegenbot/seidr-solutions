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
    map<int, string> reverseMap;
    for(const auto& pair : numMap){
        reverseMap[pair.second] = pair.first;
    }
    
    vector<int> numArr;
    string result;
    stringstream ss(numbers);
    string token;
    while(ss >> token){
        numArr.push_back(numMap[token]);
    }
    sort(numArr.begin(), numArr.end());
    
    for(const auto& num : numArr){
        result += reverseMap[num] + " ";
    }
    
    result.pop_back(); // Remove trailing space
    return result;
}