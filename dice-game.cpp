double getProbability(int n, int m) {
    if(n <= m)
        return 0.0;
    double totalProb = 1.0;
    for(int i = 1; i < m; i++)
        totalProb -= (double)i / n;
    return totalProb;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(9) << getProbability(n, m);
    return 0;
}