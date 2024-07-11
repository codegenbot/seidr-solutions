int count = 0;
    for(int i = 1; i < n; i++) {
        if(i % 11 == 0 || i % 13 == 0) {
            string s = to_string(i);
            for(char c : s) {
                if(c == '7') {
                    count++;
                }
            }
        }
    }
    return count;
}