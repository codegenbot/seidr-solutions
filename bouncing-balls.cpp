int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    bouncinessIndex = firstBounceHeight / startingHeight;
    totalDistance = startingHeight + firstBounceHeight + (firstBounceHeight * bouncinessIndex) * (pow(bouncinessIndex, numBounces-1) - 1) / (bouncinessIndex - 1);

    cout << totalDistance << endl;

    return 0;
}