```cpp
double startHeight, firstBounce;
int numBounces;

cin >> startHeight >> firstBounce >> numBounces;

double bouncinessIndex = firstBounce / startHeight;

double totalDistance = 0.0;
for (int i = 1; i <= numBounces; ++i) {
    double newHeight = startHeight * (1 - bouncinessIndex);
    totalDistance += abs(newHeight - startHeight); 
    startHeight = newHeight; 
}

std::cout << std::fixed;
std::cout << totalDistance << std::endl;

return 0;