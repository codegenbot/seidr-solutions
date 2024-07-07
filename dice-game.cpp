double diceGame(int n, int m) {
    double p = 0;
    for (int i = 1; i < m || i > n; ) {
        if(i>m){
            p += (1.0 / n) * (1.0 / m);
        }else if(i<n){
            p += (1.0 / n) * (1.0 / m);
        }
        i++;
    }
    return 1 - p;
}