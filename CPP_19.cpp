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

    map<int, string> reverse_map;
    for (auto &pair : number_map) {
        reverse_map[pair.second] = pair.first;
    }

    string result;
    for (auto &pair : number_map) {
        size_t pos = numbers.find(pair.first);
        while (pos != string::npos) {
            result += pair.first + " ";
            numbers.replace(pos, pair.first.length(), "");
            pos = numbers.find(pair.first);
        }
    }

    string sorted_result;
    for (auto &pair : reverse_map) {
        size_t pos = result.find(pair.second);
        while (pos != string::npos) {
            sorted_result += pair.second + " ";
            result.replace(pos, pair.second.length(), "");
            pos = result.find(pair.second);
        }
    }

    return sorted_result;
}