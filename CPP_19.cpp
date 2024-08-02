string sort_numbers(string numbers) {
    map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                 {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                 {"eight", 8}, {"nine", 9}};
    vector<string> num_str;
    string temp;
    for (char c : numbers) {
        if (c == ' ') {
            num_str.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    num_str.push_back(temp);

    sort(num_str.begin(), num_str.end());

    string result = "";
    for (string s : num_str) {
        result += s + " ";
    }

    return result.substr(0, result.size() - 1);
}