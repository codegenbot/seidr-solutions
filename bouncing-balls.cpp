int main() {
    double startHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    
    cin >> startHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startHeight;
    
    double totalDistance = startHeight;
    for (int i = 0; i < numBounces; ++i) {
        totalDistance += 2 * startHeight * pow(bouncinessIndex, i);
    }
    
    cout << totalDistance << endl;
    
    return 0;
}