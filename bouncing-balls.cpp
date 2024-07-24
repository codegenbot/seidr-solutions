int main() {
    double startingHeight, bounceHeight;
    int numBounces;
    cin >> startingHeight >> bounceHeight >> numBounces;

    double bouncinessIndex = bounceHeight / startingHeight;
    double totalDistance = startingHeight + (startingHeight + bounceHeight) * bouncinessIndex * numBounces;

    cout << totalDistance << endl;

    return 0;
}