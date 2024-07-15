map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> reverse_number_map;

for(const auto &pair : number_map){
    reverse_number_map[pair.second] = pair.first;
}

stringstream ss(numbers);
string token;
vector<int> number_vals;

while (ss >> token) {
    number_vals.push_back(number_map[token]);
}

sort(number_vals.begin(), number_vals.end());

string result;
for(const auto &val : number_vals){
    result += reverse_number_map[val] + " ";
}

result.pop_back(); // Remove trailing space

return result;
}