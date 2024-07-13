double startHeight;
double actualBouncinessIndex;

cin >> startHeight >> actualBouncinessIndex;

actualBouncinessIndex /= startHeight;

double totalDistance = (pow(2, actualBouncinessIndex) - 1) * actualBouncinessIndex * startHeight;

cout << fixed << setprecision(2) << totalDistance;