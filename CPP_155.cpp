string numStr = to_string(abs(num));
    vector<int> result(2, 0);
    for (char c : numStr) {
        if (c % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}