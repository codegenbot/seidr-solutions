map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
multimap<int, string> rev_num_map;
string result = "";
string curr_num = "";

for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] == ' ') {
        rev_num_map.insert({num_map[curr_num], curr_num});
        curr_num = "";
    } else {
        curr_num += numbers[i];
    }
}

rev_num_map.insert({num_map[curr_num], curr_num});

for (auto it = rev_num_map.begin(); it != rev_num_map.end(); it++) {
    result += it->second + " ";
}

result.pop_back(); // Remove the extra space at the end
return result;
}