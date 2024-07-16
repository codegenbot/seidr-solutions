vector<int> count = {0, 0};
    string numStr = to_string(abs(num));
    for (char digit : numStr) {
        if ((digit - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}