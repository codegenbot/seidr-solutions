vector<int> counts(2, 0);
    
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++; // even
        } else {
            counts[1]++; // odd
        }
    }
    
    return counts;
}