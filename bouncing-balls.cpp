int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * firstBounceHeight; // As the ball bounces back to the initial height
        firstBounceHeight *= bouncinessIndex;
        totalDistance += firstBounceHeight;
    }
    
    cout << totalDistance << endl;

    return 0;
}