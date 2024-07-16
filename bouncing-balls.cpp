int main() {
    double h0, hn, bouncinessIndex;
    int numBounces;
    
    cin >> h0 >> hn >> numBounces;
    
    bouncinessIndex = hn / h0;
    
    double totalDistance = h0 + hn;
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * hn;
        hn *= bouncinessIndex;
        totalDistance += hn;
    }
    
    cout << totalDistance << endl;
    
    return 0;
}