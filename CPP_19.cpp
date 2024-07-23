map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_num_map;
for (auto it = num_map.begin(); it != num_map.end(); ++it) {
    rev_num_map[it->second] = it->first;
}

vector<int> num_list;
string curr_num = "";
for (char c : numbers) {
    if (c == ' ') {
        num_list.push_back(num_map[curr_num]);
        curr_num = "";
    } else {
        curr_num += c;
    }
}
num_list.push_back(num_map[curr_num]);

sort(num_list.begin(), num_list.end());

string res = "";
for (int num : num_list) {
    res += rev_num_map[num] + " ";
}
res.pop_back(); // Remove the extra space at the end
return res;