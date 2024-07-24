for (char c : str) {
    int digit = c - '0';
    if (digit % 2 == 0)
        result[0]++;
    else
        result[1]++;
}