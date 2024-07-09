int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i == 9) && n > 1)
            count += pow(10, n - 1);
        else if ((i == 1 || i == 9) && n == 1)
            count++;
    }
    for (int i = 10; i < pow(10, n); i++) {
        int num = i;
        bool starts_with_one = false;
        bool ends_with_one = false;
        while (num > 0) {
            if (num % 10 == 1) {
                starts_with_one = true;
                break;
            }
            num /= 10;
        }
        num = i;
        while (num > 0) {
            if (num % 10 == 1) {
                ends_with_one = true;
                break;
            }
            num /= 10;
        }
        if (starts_with_one || ends_with_one)
            count++;
    }
    return count;
}