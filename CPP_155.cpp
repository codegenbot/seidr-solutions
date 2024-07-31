string numStr = to_string(abs(num));
    vector<int> result(2, 0);
    
    for (char digit : numStr) {
        int d = digit - '0';
        if (d % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    
    return result;
}