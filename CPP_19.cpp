map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> reverse_number_map;
    for (const auto& pair : number_map) {
        reverse_number_map[pair.second] = pair.first;
    }

    vector<int> nums;
    string num_str;
    for (char c : numbers) {
        if (c == ' ') {
            nums.push_back(number_map[num_str]);
            num_str = "";
        } else {
            num_str += c;
        }
    }
    nums.push_back(number_map[num_str]);

    sort(nums.begin(), nums.end());

    string result;
    for (int num : nums) {
        result += reverse_number_map[num] + " ";
    }
    result.pop_back(); // remove extra space at the end
    return result;
}