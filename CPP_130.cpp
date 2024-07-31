vector<int> tri(int n){
    vector<int> tribonacci(n + 1);
    tribonacci[0] = 3;
    if (n > 0) tribonacci[1] = 1;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            tribonacci[i] = 1 + i / 2;
        } else {
            tribonacci[i] = tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i + 1];
        }
    }
    return tribonacci;
}