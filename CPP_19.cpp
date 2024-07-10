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
    map<int, string> reverseMap;
    
    for (const auto &pair : numMap) {
        reverseMap[pair.second] = pair.first;
    }
    
    vector<int> sortedNums;
    istringstream iss(numbers);
    string number;
    while (iss >> number) {
        sortedNums.push_back(numMap[number]);
    }
    sort(sortedNums.begin(), sortedNums.end());
    
    for (int num : sortedNums) {
        result += reverseMap[num] + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}