vector<int> count(2, 0);
    string str = to_string(abs(num));
    for (char c : str) {
        if ((c - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}