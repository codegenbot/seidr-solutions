int even = 0, odd = 0;
    string num_str = to_string(abs(num));
    for (char c : num_str) {
        if ((c - '0') % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    return {even, odd};
}