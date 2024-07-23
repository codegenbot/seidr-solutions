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
    for(auto const &pair : numMap){
        revNumMap[pair.second] = pair.first;
    }

    vector<int> numList;
    stringstream ss(numbers);
    string token;
    while(getline(ss, token, ' ')){
        numList.push_back(numMap[token]);
    }

    sort(numList.begin(), numList.end());

    for(int num : numList){
        result += revNumMap[num] + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}