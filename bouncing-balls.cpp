int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance = 0;
    int numOfBounces;

    cin >> startingHeight >> firstBounceHeight >> numOfBounces;

    bouncinessIndex = firstBounceHeight / startingHeight;

    totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numOfBounces; i++) {
        totalDistance += 2 * firstBounceHeight * pow(bouncinessIndex, i);
    }

    cout << totalDistance << endl;

    return 0;
}