string str_num = to_string(abs(num));
    vector<int> counts(2); // Index 0 for even, Index 1 for odd
    
    for (char c : str_num) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    
    return counts;
}