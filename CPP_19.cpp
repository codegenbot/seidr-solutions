map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> reverse_map;

    for (const auto &pair : number_map) {
        reverse_map[pair.second] = pair.first;
    }

    vector<int> num_values;

    string current_number = "";
    for (char c : numbers) {
        if (c == ' ') {
            num_values.push_back(number_map[current_number]);
            current_number = "";
        } else {
            current_number += c;
        }
    }
    num_values.push_back(number_map[current_number]);

    sort(num_values.begin(), num_values.end());

    string result = "";
    for (int num : num_values) {
        result += reverse_map[num] + " ";
    }

    return result;
}