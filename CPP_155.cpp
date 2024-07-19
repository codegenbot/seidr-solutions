string num_str = to_string(abs(num));
    vector<int> count = {0, 0};
    for (char c : num_str) {
        if (c % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}