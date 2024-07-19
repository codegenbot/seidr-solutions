map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_map;
for (auto const& pair : num_map) {
    rev_map[pair.second] = pair.first;
}

int count = 0;
size_t pos = 0;
while ((pos = numbers.find(' ', pos)) != string::npos) {
    count++;
    pos++;
}

vector<string> tokens(count + 1);
istringstream ss(numbers);
for (int i = 0; i <= count; i++) {
    ss >> tokens[i];
}

sort(tokens.begin(), tokens.end(), [&](const string &a, const string &b) {
    return num_map[a] < num_map[b];
});

string result;
for (const auto& token : tokens) {
    result += token + " ";
}
return result.substr(0, result.size() - 1);
}