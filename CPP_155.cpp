int evenCount = 0, oddCount = 0;
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    return {evenCount, oddCount};
}