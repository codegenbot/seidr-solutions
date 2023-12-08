#include <iostream>
#include <cmath>
using namespace std;
int main() {
double startingHeight, firstBounceHeight;
int numBounces;
cin >> startingHeight >> firstBounceHeight >> numBounces;
if (numBounces == 0) {
cout << "0.0" << endl;
return 0;
}
double bouncinessIndex = firstBounceHeight / startingHeight;
double totalDistance = 0;
for (int i = 0; i < numBounces; i++) {
totalDistance += startingHeight * (1 - std::pow(bouncinessIndex, i + 1));
}
cout << fixed << setprecision(12) << totalDistance << endl;
return 0;
}

