int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startingHeight;
    totalDistance = startingHeight + firstBounceHeight;
    
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * firstBounceHeight * pow(bouncinessIndex, i);
    }
    
    cout << totalDistance << endl;
    
    return 0;
}