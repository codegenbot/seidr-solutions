int main() {
    double startHeight, bounceHeight, bouncinessIndex;
    int numBounces;
    
    cin >> startHeight >> bounceHeight >> numBounces;
    
    bouncinessIndex = bounceHeight / startHeight;
    
    double totalDistance = startHeight + bounceHeight;
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * bounceHeight * pow(bouncinessIndex, i - 1);
    }
    
    cout << totalDistance << endl;
    
    return 0;
}