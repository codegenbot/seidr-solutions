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

double bouncingBall(double startingHeight, double heightAfterFirstBounce, int numBounces) {
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    return (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    cout << fixed << setprecision(10) << bouncingBall(startingHeight, heightAfterFirstBounce, numBounces) << endl;
    return 0;
}