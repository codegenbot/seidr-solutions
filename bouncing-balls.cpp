int main() {
    double startingHeight, firstBounceHeight;
    int numberOfBounces;

    cin >> startingHeight >> firstBounceHeight >> numberOfBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 0; i < numberOfBounces; ++i) {
        totalDistance += 2 * firstBounceHeight;
        firstBounceHeight *= bouncinessIndex;
    }

    printf("%.12f\n", totalDistance);
    return 0;
}