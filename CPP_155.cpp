vector<int> counts(2, 0);
    string num_str = to_string(abs(num));
    for (char digit : num_str) {
        if ((digit - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}