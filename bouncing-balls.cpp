int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startingHeight;
    
    double totalDistance = startingHeight + firstBounceHeight;
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += firstBounceHeight * pow(bouncinessIndex, i);
    }
    
    cout << totalDistance << endl;
    
    return 0;
}