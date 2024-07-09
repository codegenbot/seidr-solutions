map<string, int> numMap = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> nums;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            nums.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }

    nums.push_back(temp);

    sort(nums.begin(), nums.end(), [&numMap](string a, string b) {
        return numMap.at(a) < numMap.at(b);
    });

    string result;
    for (int i = 0; i < nums.size(); i++) {
        if (i == 0)
            result = nums[i];
        else
            result += " " + nums[i];
    }

    return result;
}