map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_num_map;
for (auto const &pair : num_map) {
    rev_num_map[pair.second] = pair.first;
}

string result;
for (int i = 0; i <= 9; ++i) {
    if (numbers.find(rev_num_map[i]) != string::npos) {
        result += rev_num_map[i] + " ";
    }
}

return result;