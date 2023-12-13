```cpp
double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = startingHeight;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += bouncinessIndex * totalDistance;
    }
    return totalDistance;
}
```