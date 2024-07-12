string num_str = to_string(abs(num));
    vector<int> counts(2, 0);
    
    for (char digit : num_str) {
        if (digit % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    
    return counts;
}