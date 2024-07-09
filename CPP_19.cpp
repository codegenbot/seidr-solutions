map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> reverse_map;
for (auto const &pair : number_map) {
    reverse_map[pair.second] = pair.first;
}

vector<int> number_values;
string result;

istringstream iss(numbers);
string word;
while (iss >> word) {
    number_values.push_back(number_map[word]);
}

sort(number_values.begin(), number_values.end());

for (int num : number_values) {
    result += reverse_map[num] + " ";
}

result.pop_back(); // Remove the extra space at the end

return result;
}