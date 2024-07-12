int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startingHeight;
    
    double totalDistance = startingHeight + firstBounceHeight;
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2 * firstBounceHeight * pow(bouncinessIndex, i);
    }
    
    cout << totalDistance << endl;
    
    return 0;
}