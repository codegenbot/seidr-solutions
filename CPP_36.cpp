int count = 0;
    for (int i = 1; i < n; i++) {
        if (i % 11 == 0 || i % 13 == 0) {
            string num_str = to_string(i);
            for (char digit : num_str) {
                if (digit == '7') {
                    count++;
                }
            }
        }
    }
    return count;
}