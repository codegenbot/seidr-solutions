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
    vector<string> numList;
    stringstream ss(numbers);
    string token;
    
    while (ss >> token){
        numList.push_back(token);
    }
    
    sort(numList.begin(), numList.end(), [&](const string &a, const string &b){
        return numMap[a] < numMap[b];
    });
    
    string result;
    for (const string &num : numList){
        result += num + " ";
    }
    
    return result;
}