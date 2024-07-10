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

vector<pair<string, int>> number_list;
string result = "";

string current_number = "";
for (char c : numbers) {
    if (c != ' ') {
        current_number += c;
    } else {
        number_list.push_back({current_number, number_map[current_number]});
        current_number = "";
    }
}
number_list.push_back({current_number, number_map[current_number}]);

sort(number_list.begin(), number_list.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second;
});

for (auto num : number_list) {
    result += num.first + " ";
}

return result;
}