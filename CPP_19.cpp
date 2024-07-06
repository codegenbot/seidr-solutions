map<string, int> numberMap = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> nums;
    string num;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            nums.push_back(num);
            num.clear();
        } else {
            num += numbers[i];
        }
    }

    nums.push_back(num);

    sort(nums.begin(), nums.end());

    string result;
    for (auto &n : nums) {
        result += numberMap.find(n)->second + " ";
    }

    return result.substr(0, result.length() - 1);
}