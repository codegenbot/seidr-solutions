map<string, int> numMap = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    string result = "";
    vector<string> nums;
    int start = 0, end = 0;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            end = i - 1;
            nums.push_back(numbers.substr(start, end - start));
            start = i + 1;
        }
    }

    end = numbers.length() - 1;
    nums.push_back(numbers.substr(start, end - start));

    sort(nums.begin(), nums.end(), [&numMap](string a, string b) {
        return numMap[a] < numMap[b];
    });

    for (int i = 0; i < nums.size(); i++) {
        result += nums[i];
        if (i != nums.size() - 1)
            result += " ";
    }

    return result;
}