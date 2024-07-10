double probability(int n, int m) {
    if(n <= m) return 1.0 - (double)(m)/(n*m);
    else return 1.0;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n,m) << endl;
    return 0;
}