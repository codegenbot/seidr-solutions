map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_num_map = {{0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}};

vector<int> nums;
string result;

size_t pos = 0, found;
while ((found = numbers.find(" ", pos)) != string::npos) {
    string num_str = numbers.substr(pos, found - pos);
    nums.push_back(num_map[num_str]);
    pos = found + 1;
}
nums.push_back(num_map[numbers.substr(pos)]);

sort(nums.begin(), nums.end());

for (int num : nums) {
    result += rev_num_map[num] + " ";
}

result.pop_back(); // Remove the extra space at the end
return result;
}