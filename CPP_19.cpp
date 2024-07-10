map<string, int> numeral_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> reverse_numeral_map;
for (auto const& pair : numeral_map) {
    reverse_numeral_map[pair.second] = pair.first;
}

vector<int> nums;
stringstream ss(numbers);
string token;
while (ss >> token) {
    nums.push_back(numeral_map[token]);
}

sort(nums.begin(), nums.end());

string sorted_str;
for (int num : nums) {
    sorted_str += reverse_numeral_map[num] + " ";
}

sorted_str.pop_back();
return sorted_str;
}