```cpp
int startHeight, firstBounce;
cin >> startHeight >> firstBounce;

double bouncinessIndex = (double)firstBounce / startHeight;

double totalDistance = 0.0;
for (int i = 1; i <= numBounces; ++i) {
    totalDistance += pow(2, -bouncinessIndex) * startHeight;
    startHeight *= bouncinessIndex;
}

cout << fixed;
cout << totalDistance << "\n";