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
    map<int, string> revNumMap;
    for(auto it : numMap){
        revNumMap[it.second] = it.first;
    }

    vector<int> nums;
    string num;
    for(char c : numbers){
        if(c == ' '){
            nums.push_back(numMap[num]);
            num = "";
        } else {
            num += c;
        }
    }
    nums.push_back(numMap[num]);

    sort(nums.begin(), nums.end());

    string result = "";
    for(int n : nums){
        result += revNumMap[n] + " ";
    }

    result.pop_back(); // Remove extra space at the end
    return result;
}