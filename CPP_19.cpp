map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
multimap<int, string> sorted_nums;
string result = "";

for (size_t i = 0, j = 0; i <= numbers.length(); ++i) {
    if (i == numbers.length() || numbers[i] == ' ') {
        string num_str = numbers.substr(j, i - j);
        sorted_nums.insert({num_map[num_str], num_str});
        j = i + 1;
    }
}

for (const auto &num : sorted_nums) {
    result += num.second + " ";
}

return result.substr(0, result.size() - 1);
}