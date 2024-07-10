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

string sorted_numbers = "";
for (int i = 0; i <= 9; ++i) {
    for (const auto& pair : number_map) {
        if (pair.second == i) {
            if (numbers.find(pair.first) != string::npos) {
                sorted_numbers += pair.first + " ";
            }
        }
    }
}

return sorted_numbers;