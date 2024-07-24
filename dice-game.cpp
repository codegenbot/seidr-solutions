Here is the solution:

double probability(int n, int m) {
    if(n < m)
        return 0;
    else if(m == 1)
        return 1.0;
    else
        return (n - m + 1.0)/(n * 1.0);
}