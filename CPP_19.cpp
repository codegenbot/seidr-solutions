map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_map;
for (auto const& pair : num_map) {
    rev_map[pair.second] = pair.first;
}

string result;
for (int i = 0; i < numbers.size(); i += 5) {
    result += rev_map[num_map[numbers.substr(i, 4)]] + " ";
}
result.pop_back(); // Remove extra space at the end
return result;
}