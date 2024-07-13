int main() {
    double h0, h1, bouncinessIndex, totalDistance;
    int numBounces;
    cin >> h0 >> h1 >> numBounces;
    
    bouncinessIndex = h1 / h0;
    totalDistance = h0 + h0 * (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);
    
    cout << totalDistance << endl;
    
    return 0;
}