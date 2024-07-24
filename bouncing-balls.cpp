double totalDistance = 0.0;
for (int i = 1; i <= numBounces; ++i) {
    startHeight *= bouncinessIndex;
    totalDistance += 2 * startHeight; // Corrected here
}