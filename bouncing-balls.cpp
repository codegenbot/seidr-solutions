double startHeight, firstBounce;
int numBounces;

cin >> startHeight >> firstBounce >> numBounces;

double bouncinessIndex = firstBounce / startHeight;

double totalDistance = 0.0;
for (int i = 1; i <= numBounces; ++i) {
    double height = ((startHeight * pow(2, -bouncinessIndex)) / 2);
    totalDistance += height;
    startHeight = height;
}

cout << fixed << setprecision(5);
cout << totalDistance << endl;

return 0;