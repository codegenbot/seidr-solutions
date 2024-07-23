map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_map;
for (auto it = num_map.begin(); it != num_map.end(); ++it) {
    rev_map[it->second] = it->first;
}

vector<int> sorted_numbers;
string token;
istringstream ss(numbers);
while (ss >> token) {
    sorted_numbers.push_back(num_map[token]);
}
sort(sorted_numbers.begin(), sorted_numbers.end());

string result;
for (int num : sorted_numbers) {
    result += rev_map[num] + " ";
}
result.pop_back(); // Remove the extra space at the end
return result;
}