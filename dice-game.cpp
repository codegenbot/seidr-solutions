Here is the solution:

double diceGame(int n, int m) {
    double total = (double)(n + m);
    if(n > m)
        return 1.0 - (m/(total));
    else
        return m/(total);
}