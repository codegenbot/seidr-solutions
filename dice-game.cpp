Here is the solution:

double getProbability(int n, int m) {
    double total = (n + m - 2);
    return ((m-1)/(total)) * ((n-m+1)/total);
}