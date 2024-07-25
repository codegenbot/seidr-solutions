map<string, int> number_map = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

multimap<int, string> sorted_numbers;
string result;

size_t pos = 0;
size_t found;
while ((found = numbers.find(' ', pos)) != string::npos) {
    string num = numbers.substr(pos, found - pos);
    sorted_numbers.insert({number_map[num], num});
    pos = found + 1;
}
string num = numbers.substr(pos);
sorted_numbers.insert({number_map[num], num});

for (const auto& pair : sorted_numbers) {
    result += pair.second + " ";
}

return result.substr(0, result.size() - 1);