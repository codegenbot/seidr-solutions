vector<int> result(2, 0);
    string num_str = to_string(abs(num));
    for (char digit : num_str) {
        if ((digit - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}