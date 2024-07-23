Here is the solution:

double diceGame(int n, int m) {
    double total = (n + m);
    if(n > m) {
        return 1 - ((double)m / total);
    } else if(n < m) {
        return (double)m / total;
    } else {
        return 0.5;
    }
}