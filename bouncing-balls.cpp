int main() {
    double startHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    
    cin >> startHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startHeight;
    totalDistance = startHeight + firstBounceHeight;
    
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += firstBounceHeight * pow(bouncinessIndex, i);
    }
    
    cout << totalDistance << endl;
    
    return 0;
}