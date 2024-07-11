string sort_numbers(string numbers) {
    map<string, int> num_map = {
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

    vector<string> num_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<int> nums;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        nums.push_back(num_map[token]);
    }

    sort(nums.begin(), nums.end());

    string result;
    for (int num : nums) {
        result += num_strings[num];
        result += " ";
    }

    if (!result.empty()) {
        result.pop_back(); // Remove last space
    }

    return result;
}