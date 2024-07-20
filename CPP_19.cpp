map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> reverse_map;
for (auto const &pair : number_map) {
    reverse_map[pair.second] = pair.first;
}

vector<int> nums;
string result;
string current_num;
for (char c : numbers) {
    if (c == ' ') {
        nums.push_back(number_map[current_num]);
        current_num = "";
    } else {
        current_num += c;
    }
}
nums.push_back(number_map[current_num]);

sort(nums.begin(), nums.end());

for (int num : nums) {
    result += reverse_map[num] + " ";
}

return result;