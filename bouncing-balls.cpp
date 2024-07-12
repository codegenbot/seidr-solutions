double startHeight, bouncinessIndex, numBounces;
double totalDistance = 0.0;

cout << "Enter the starting height: ";
cin >> startHeight;

cout << "Enter the height after the first bounce: ";
cin >> bouncinessIndex;

cout << "Enter the number of bounces: ";
cin >> numBounces;

totalDistance = 0.0;
for (int i = 0; i < numBounces; ++i) {
    double distance = pow(2, -i * bouncinessIndex) * startHeight;
    totalDistance += distance;
}