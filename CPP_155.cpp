int even = 0, odd = 0;
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if (c != '-') {
            if ((c - '0') % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}