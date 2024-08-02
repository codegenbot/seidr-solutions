int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || to_string(i).substr(0, 1) == "1") &&
            (n > 1 && (i == 1 || to_string(i).substr(to_string(i).size() - 1, 1) == "1"))) {
            count++;
        }
    }
    for (int i = 10; i <= pow(10, n-1); i++) {
        if ((i % 10 == 1 || to_string(i).substr(to_string(i).size() - 1, 1) == "1") &&
            (n > 1 && (i / pow(10, n-1) == 1 || to_string(i).substr(0, 1) == "1"))) {
            count++;
        }
    }
    return count;
}