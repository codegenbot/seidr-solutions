int numBounces, startingHeight;
totalDistance = 0;
bouncinessIndex = (heightAfterFirstBounce / startingHeight);
for(int i = 1; i <= numBounces; ++i) {
    totalDistance += 2 * (startingHeight * bouncinessIndex - startingHeight);
}