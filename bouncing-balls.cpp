int main() {
    double startingHeight, bounceHeight, bouncinessIndex, totalDistance;
    int numBounces;

    cin >> startingHeight >> bounceHeight >> numBounces;

    bouncinessIndex = bounceHeight / startingHeight;
    totalDistance = startingHeight + (startingHeight + bounceHeight) * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);

    cout << totalDistance << endl;

    return 0;
}