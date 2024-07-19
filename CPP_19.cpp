map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_num_map;

for (auto entry : num_map) {
    rev_num_map[entry.second] = entry.first;
}

vector<int> sorted_nums;
istringstream iss(numbers);
string word;
while (iss >> word) {
    sorted_nums.push_back(num_map[word]);
}

sort(sorted_nums.begin(), sorted_nums.end());

string result;
for (int num : sorted_nums) {
    result += rev_num_map[num] + " ";
}

result.pop_back(); // Remove extra space at the end
return result;
}