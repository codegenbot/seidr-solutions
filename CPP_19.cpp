map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, 
                            {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_num_map;

for(auto const &pair : num_map){
    rev_num_map[pair.second] = pair.first;
}

sort(numbers.begin(), numbers.end(), [&](const string &a, const string &b) {
    return num_map[a] < num_map[b];
});

string result;
for(const auto &num : numbers){
    result += num + " ";
}

return result;
}