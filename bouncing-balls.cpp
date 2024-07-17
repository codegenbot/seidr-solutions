```cpp
double totalDistance = 0.0;
// ...
for (int i = 1; i <= numBounces; ++i) {
    totalDistance += (2 * startHeight * (1 - pow(bouncinessIndex, i)));
}
long double finalTotalDistance = static_cast<long double>(totalDistance);
cout << fixed << setprecision(5) << finalTotalDistance << "\n";