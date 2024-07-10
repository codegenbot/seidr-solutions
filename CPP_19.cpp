map<string, int> nums = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_nums;
for (auto it : nums) {
    rev_nums[it.second] = it.first;
}

string result = "";
for (int i = 0; i <= 9; ++i) {
    if (numbers.find(rev_nums[i]) != string::npos) {
        result += rev_nums[i] + " ";
    }
}

return result;