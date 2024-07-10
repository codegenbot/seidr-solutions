map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> reverse_map;
for (auto& pair : number_map) {
    reverse_map[pair.second] = pair.first;
}
string result = "";
for (int i = 0; i < numbers.length(); i += 6) {
    result += reverse_map[number_map[numbers.substr(i, 5)]] + " ";
}
return result;