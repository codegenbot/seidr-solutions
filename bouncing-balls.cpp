double totalDistance = 2 * abs(startHeight);
for (int i = 1; i <= numBounces; ++i) {
    if(i > 1)
        startHeight = abs(startHeight * bouncinessIndex);
    else
        startHeight = firstBounce;
    totalDistance += 2 * abs(startHeight); 
}