int count_open = 0;
    int count_close = 0;
    
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                count_open++;
            } else {
                if (count_open > 0) {
                    count_open--;
                } else {
                    count_close++;
                }
            }
        }
    }
    
    return (count_open == 0 && count_close <= 1) ? "Yes" : "No";
}