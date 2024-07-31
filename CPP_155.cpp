vector<int> count = {0, 0};
    string number = to_string(abs(num));

    for (char c : number) {
        if ((c - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }

    return count;
}