int main() {
    double h0, h1;
    int n;
    cin >> h0 >> h1 >> n;

    double bouncinessIndex = h1 / h0;
    double totalDistance = h0 * (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, n)) / (1 - bouncinessIndex);
    
    cout << totalDistance << endl;
    
    return 0;
}