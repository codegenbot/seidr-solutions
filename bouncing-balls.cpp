#include <iostream>
using namespace std;

int main() {
  double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
  int numBounces;
  
  cin >> startingHeight >> firstBounceHeight >> numBounces;
  
  bouncinessIndex = firstBounceHeight / startingHeight;
  totalDistance = startingHeight + firstBounceHeight;
  for (int i = 2; i <= numBounces; i++) {
    totalDistance += 2 * firstBounceHeight;
    firstBounceHeight *= bouncinessIndex;
    totalDistance += firstBounceHeight;
  }
  
  cout << totalDistance << endl;
  
  return 0;
}