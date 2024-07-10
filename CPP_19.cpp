map<string, int> num_to_val = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

map<int, string> val_to_num;
for (auto it = num_to_val.begin(); it != num_to_val.end(); it++) {
    val_to_num[it->second] = it->first;
}

vector<int> nums;
string curr_num;
for (int i = 0; i < numbers.length(); i++) {
    if (numbers[i] != ' ') {
        curr_num += numbers[i];
    } else {
        nums.push_back(num_to_val[curr_num]);
        curr_num = "";
    }
}
nums.push_back(num_to_val[curr_num]);

sort(nums.begin(), nums.end());

string sorted_numbers;
for (int i = 0; i < nums.size(); i++) {
    sorted_numbers += val_to_num[nums[i]];
    if (i != nums.size() - 1) {
        sorted_numbers += " ";
    }
}

return sorted_numbers;
}