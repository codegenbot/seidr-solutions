int num_abs = abs(num);
    string num_str = to_string(num_abs);
    vector<int> count(2, 0);
    
    for (char c : num_str) {
        if (c - '0' % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    
    return count;
}