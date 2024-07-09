map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                            {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                            {"eight", 8}, {"nine", 9}};

string sort_numbers(string numbers) {
    vector<string> nums;
    string num;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == ' ') {
            nums.push_back(num);
            num = "";
        } else {
            num += numbers[i];
        }
    }

    nums.push_back(num);

    sort(nums.begin(), nums.end(), [&numMap](string a, string b) {
        return to_string(numMap[а]) < to_string(numMap[b]);
    });

    string result;
    for (auto &str : nums) {
        result += str + " ";
    }

    return result.substr(0, result.size() - 1);
}