#include <iostream>
using namespace std;
double bouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}
double totalDistanceTravelled(double bouncinessIndex, int numOfBounces) {
    double distance = 0.0;
    for (int i = 1; i <= numOfBounces; i++) {
        distance += 2 * bouncinessIndex * (1 - pow(bouncinessIndex, i)) / (1 - bouncinessIndex);
    }
    return distance;
}
int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex;
    int numOfBounces;
    while (cin >> startingHeight >> heightAfterFirstBounce >> numOfBounces) {
        bouncinessIndex = bouncinessIndex(startingHeight, heightAfterFirstBounce);
        cout << totalDistanceTravelled(bouncinessIndex, numOfBounces) << endl;
    }
    return 0;
}