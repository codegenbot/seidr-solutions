vector<int> result(2, 0);
    string str_num = to_string(abs(num));
    
    for (char c : str_num) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    
    return result;
}