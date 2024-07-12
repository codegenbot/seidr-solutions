int main() {
    double startHeight, bounceHeight, bouncinessIndex, totalDistance;
    int numBounces;

    cin >> startHeight >> bounceHeight >> numBounces;

    bouncinessIndex = bounceHeight / startHeight;
    totalDistance = startHeight + bounceHeight;

    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * bounceHeight * pow(bouncinessIndex, i);
    }

    cout << totalDistance << endl;

    return 0;
}