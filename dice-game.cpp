```c
double diceGame(int n, int m) {
    double p = 0;
    for(int i=1; i<n; i++) {
        p += (n-i)/(double)(n*m);
    }
    return p;
}