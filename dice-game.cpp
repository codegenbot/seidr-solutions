Here is the solution:

double getProbability(int n, int m) {
    double total = (n + m - 1);
    if(n > m)
        return (n - m) / (double)total;
    else
        return (m - n) / (double)total;
}