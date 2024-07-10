map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    string result = "";
    string current_num = "";
    
    for (char& c : numbers) {
        if (c != ' ') {
            current_num += c;
        } else {
            result += current_num;
            result += ' ';
            current_num = "";
        }
    }
    result += current_num;
    
    for (int i = 0; i < result.size(); i += 4) {
        for (int j = i + 4; j < result.size(); j += 4) {
            if (num_map[result.substr(i, 4)] > num_map[result.substr(j, 4)]) {
                swap(result.substr(i, 4), result.substr(j, 4));
            }
        }
    }
    
    return result;
}