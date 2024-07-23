double totalDistance = 0.0;
for (int i = 1; i <= numBounces; i++) {
    totalDistance += 2 * (heightFirstBounce - heightStart) * pow(bouncinessIndex, i-1);
}