#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

double bouncingBall(double startingHeight, double firstBounceHeight, int numBounces) {
    if (numBounces == 0) return 0;
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += (startingHeight + (i * bouncinessIndex));
    }
    return totalDistance;
}