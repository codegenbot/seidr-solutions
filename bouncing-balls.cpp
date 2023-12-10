#include <iostream>
#include <cmath>
using namespace std;
int main() {
cout << "Enter starting height: ";
float startHeight;
cin >> startHeight;
cout << "Enter height after first bounce: ";
float firstBounceHeight;
cin >> firstBounceHeight;
cout << "Enter number of bounces: ";
int numBounces;
cin >> numBounces;
float bouncinessIndex = firstBounceHeight / startHeight;
float totalDistance = 0.0f;
for (int i = 0; i < numBounces; i++) {
totalDistance += bouncinessIndex * (1 - pow(bouncinessIndex, i));
}
cout << "Total distance traveled: " << totalDistance << endl;
return 0;
}