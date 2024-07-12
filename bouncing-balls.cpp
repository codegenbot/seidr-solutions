double startHeight, bouncinessIndex, numBounces;
double totalDistance = 0.0;

cin >> startHeight >> bouncinessIndex >> numBounces;

for (int i = 0; i < numBounces; ++i) {
    double distance = pow(2, -i * bouncinessIndex) * startHeight;
    totalDistance += distance;
}