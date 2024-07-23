map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> reverse_map;
for (auto pair : number_map) {
    reverse_map[pair.second] = pair.first;
}

string result = "";
for (int i = 0; i <= 9; i++) {
    if (numbers.find(reverse_map[i]) != string::npos) {
        result += reverse_map[i] + " ";
    }
}

if (!result.empty()) {
    result.pop_back(); // Remove the last space
}

return result;
}