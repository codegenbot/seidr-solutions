double totalDistance = 0.0;
for (int i = 1; i <= numBounces; ++i) {
    totalDistance += pow(2, -bouncinessIndex) * (startHeight + firstBounce);
    startHeight *= bouncinessIndex;
}