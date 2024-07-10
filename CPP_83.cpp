int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i == to_string(i).length() * 10 + 1) {
            count++;
        }
        for (long long j = i + 1; j < 10 && to_string(j).length() != n; j++) {
            if (j == 1 || j == to_string(j).length() * 10 + 1) {
                count++;
            }
        }
    }
    return count;
}