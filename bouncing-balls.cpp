```c++
totalDistance = 0;
for(int i = 1; i <= numBounces; ++i) {
    totalDistance += (startingHeight * bouncinessIndex - startingHeight) + (startingHeight * bouncinessIndex - startingHeight);
}