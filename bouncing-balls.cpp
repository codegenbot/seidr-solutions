int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;
    
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * bouncinessIndex * firstBounceHeight;
        firstBounceHeight *= bouncinessIndex;
    }
    
    cout << totalDistance << endl;
    
    return 0;
}