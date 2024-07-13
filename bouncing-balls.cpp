int main() {
    double h0, hn;
    int n;
    cin >> h0 >> hn >> n;
    
    double bouncinessIndex = hn / h0;
    double totalDistance = h0 + hn;
    for (int i = 2; i <= n; ++i) {
        totalDistance += 2 * hn;
        hn *= bouncinessIndex;
        totalDistance += hn;
    }
    
    cout << totalDistance << endl;
    
    return 0;
}