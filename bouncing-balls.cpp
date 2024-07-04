int main() {
    double startingHeight, firstBounceHeight;
    int numberOfBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numberOfBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    double currentHeight = firstBounceHeight;
    
    for (int i = 0; i < numberOfBounces; ++i) {
        totalDistance += 2 * currentHeight;
        currentHeight *= bouncinessIndex;
    }
    
    cout << fixed << setprecision(12) << totalDistance << endl;
    
    return 0;
}