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

string sort_numbers(string numbers) {
    stringstream ss(numbers);
    vector<string> nums;
    string word;
    
    while (ss >> word) {
        nums.push_back(word);
    }
    
    sort(nums.begin(), nums.end(), [&](const string &a, const string &b) {
        return numMap[a] < numMap[b];
    });
    
    string result;
    for (const string &num : nums) {
        result += num + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}