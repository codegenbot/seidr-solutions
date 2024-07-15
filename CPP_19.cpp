string sort_numbers(string numbers) {
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

    vector<string> nums = split(numbers, ' ');
    sort(nums.begin(), nums.end(), [&numMap](const string &a, const string &b) {
        return numMap[a] < numMap[b];
    });

    return join(nums, ' ');
}