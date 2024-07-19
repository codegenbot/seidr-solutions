map<string, int> numeral_map = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
    {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    string result = "";
    map<int, string> sorted_nums;
    string num_str = "";
    for (char c : numbers) {
        if (c == ' ') {
            sorted_nums[numeral_map[num_str]] = num_str;
            num_str = "";
        } else {
            num_str += c;
        }
    }
    sorted_nums[numeral_map[num_str]] = num_str;

    for (auto num : sorted_nums) {
        result += num.second + " ";
    }
    result.pop_back(); // Remove the extra space at the end
    return result;
}