int specialFilter(int num) {
    if (abs(num) > 10 && abs(num) % 10 % 2 != 0 && abs(num) / 10 % 10 % 2 != 0) {
        return 1;
    }
    return 0;
}