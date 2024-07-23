map<string, int> num_map = {
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

    map<int, string> rev_num_map;
    for (auto const& pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }

    vector<int> sorted_numbers;
    string result = "";
    string number = "";
    for (char c : numbers) {
        if (c != ' ') {
            number += c;
        } else {
            sorted_numbers.push_back(num_map[number]);
            number = "";
        }
    }
    sorted_numbers.push_back(num_map[number]);

    sort(sorted_numbers.begin(), sorted_numbers.end());

    for (int num : sorted_numbers) {
        result += rev_num_map[num] + " ";
    }

    result.pop_back(); // Remove extra space at the end
    return result;
}