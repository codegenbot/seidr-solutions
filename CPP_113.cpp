vector<string> result;
    map<char, int> odd_count_map = {{'1', 1}, {'3', 1}, {'5', 1}, {'7', 1}, {'9', 1}};

    for (auto str : lst) {
        int count = 0;
        for (char c : str) {
            if (odd_count_map.find(c) != odd_count_map.end()) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "n the str" + to_string(count) +
                         "ng " + to_string(count) + " of the " + to_string(count) + "nput.");
    }

    return result;