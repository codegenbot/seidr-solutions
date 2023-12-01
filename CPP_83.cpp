int starts_one_ends(int n){
    int count = 0;
    int start = 1;
    int end = 1;

    for (int i = 0; i < n - 1; i++) {
        start *= 10;
    }

    for (int i = 0; i < n; i++) {
        end *= 10;
    }

    count = (end - start) / 10 + 1;

    return count;
}