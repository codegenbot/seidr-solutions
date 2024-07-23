map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> revNumMap;
for (auto const& pair : numMap) {
    revNumMap[pair.second] = pair.first;
}

string result;
for (int i = 0; i <= 9; ++i) {
    if (numbers.find(revNumMap[i]) != string::npos) {
        result += revNumMap[i] + " ";
    }
}

return result;