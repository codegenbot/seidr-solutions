map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> reverse_map;
for(auto itr = number_map.begin(); itr != number_map.end(); ++itr) {
    reverse_map[itr->second] = itr->first;
}

sort(numbers.begin(), numbers.end());

vector<int> nums;
string result;
string current_number;
for(char c : numbers) {
    if (c == ' ') {
        nums.push_back(number_map[current_number]);
        current_number = "";
    } else {
        current_number += c;
    }
}

nums.push_back(number_map[current_number]);
sort(nums.begin(), nums.end());

for(int num : nums) {
    result += reverse_map[num] + " ";
}
result.pop_back(); // remove extra space at the end
return result;
}