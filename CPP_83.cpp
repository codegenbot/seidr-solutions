int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == n || to_string(i).find("1") != string::npos) {
            count++;
        }
    }
    return count;
}