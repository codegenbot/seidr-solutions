vector<int> result = {0, 0};
    string num_str = to_string(abs(num));
    for (char& c : num_str) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}