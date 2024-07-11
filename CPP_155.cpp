string num_str = to_string(abs(num));
    vector<int> count(2, 0); // index 0 for even count, index 1 for odd count
    for (char c : num_str) {
        if (c - '0' % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}