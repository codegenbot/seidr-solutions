int main() {
    double startingHeight, bounceHeight;
    int numBounces;
    cin >> startingHeight >> bounceHeight >> numBounces;

    double bouncinessIndex = bounceHeight / startingHeight;
    double totalDistance = startingHeight + bounceHeight; // first bounce

    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2 * bounceHeight; // up and down
        bounceHeight *= bouncinessIndex;
        totalDistance += bounceHeight; // bounce height
    }

    cout << totalDistance << endl;

    return 0;
}