int numBounces, startingHeight;
double totalDistance = 0, bouncinessIndex;

cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
bouncinessIndex = (heightAfterFirstBounce / (double)startingHeight);

for(int i = 1; i <= numBounces; ++i) {
    totalDistance += 2 * (startingHeight * bouncinessIndex - startingHeight);
}

cout << "Total distance: " << totalDistance << endl;