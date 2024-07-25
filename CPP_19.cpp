map<string, int> numberMap = {
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
    vector<string> nums;
    stringstream ss(numbers);
    string num;
    while (ss >> num) {
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end(), [&](const string &a, const string &b) {
        return numberMap[a] < numberMap[b];
    });
    string result = "";
    for (const string &n : nums) {
        result += n + " ";
    }
    return result.substr(0, result.size() - 1);
}