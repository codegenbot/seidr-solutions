int main() {
    double startHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    cin >> startHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = startHeight + firstBounceHeight;
    for(int i = 2; i <= numBounces; i++) {
        totalDistance += 2 * firstBounceHeight;
        firstBounceHeight *= bouncinessIndex;
        totalDistance += firstBounceHeight;
    }

    cout << totalDistance << endl;

    return 0;
}