string str_num = to_string(abs(num));
    vector<int> count(2, 0);
    
    for (char c : str_num) {
        if ((c - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    
    return count;
}