map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_num_map;
for (auto const &pair : num_map) {
    rev_num_map[pair.second] = pair.first;
}

vector<int> nums;
string result = "";

stringstream ss(numbers);
string token;
while (ss >> token) {
    nums.push_back(num_map[token]);
}

sort(nums.begin(), nums.end());

for (int num : nums) {
    result += rev_num_map[num] + " ";
}

result.pop_back(); // Remove the extra space at the end
return result;
}