#include <iostream>
#include <cmath>

int main() {
  double startingHeight, firstBounceHeight;
  int numBounces;

  std::cin >> startingHeight >> firstBounceHeight >> numBounces;

  double bouncinessIndex = firstBounceHeight / startingHeight;
  double totalDistance = startingHeight + (2 * firstBounceHeight);

  for (int i = 2; i <= numBounces; i++) {
    totalDistance += (2 * firstBounceHeight * std::pow(bouncinessIndex, i));
  }

  std::cout << totalDistance << std::endl;

  return 0;
}