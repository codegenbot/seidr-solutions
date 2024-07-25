map<string, int> number_map = {
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

vector<string> number_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

vector<int> nums;
string result;

size_t pos = 0;
string token;
while ((pos = numbers.find(" ")) != string::npos) {
    token = numbers.substr(0, pos);
    nums.push_back(number_map[token]);
    numbers.erase(0, pos + 1);
}
nums.push_back(number_map[numbers]);

sort(nums.begin(), nums.end());

for (int num : nums) {
    result += number_strings[num] + " ";
}

result.pop_back(); // Remove extra space at the end
return result;
}