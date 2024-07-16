int main() {
    double h0, h1, bouncinessIndex;
    int numBounces;
    cin >> h0 >> h1 >> numBounces;
    bouncinessIndex = h1 / h0;
    
    double totalDistance = h0 + h1;
    for (int i = 2; i <= numBounces; i++) {
        totalDistance += 2 * h1 * pow(bouncinessIndex, i);
    }
    
    cout << totalDistance << endl;
    
    return 0;
}