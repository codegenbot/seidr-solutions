int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if(i % 11 == 0 && i % 13 == 0)
            count++;
        else if(i % 11 == 0)
            count++;
        else if(i % 13 == 0)
            count++;
    }
    return count;
}