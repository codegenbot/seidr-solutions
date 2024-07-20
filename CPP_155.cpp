vector<int> count(2, 0);
    
    string num_str = to_string(abs(num));
    for (char digit : num_str) {
        if ((digit - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    
    return count;
}