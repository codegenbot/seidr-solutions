```
double totalDistance = 0.0;
for (int i = 1; i <= numBounces; ++i) {
    totalDistance += (pow(2, i/2) + pow(2, (i-1)/2)) * (bouncinessIndex - 1);
}