#include <iostream>

int main() {
    double startingHeight;
    cin >> startingHeight;

    double heightAfterFirstBounce;
    cin >> heightAfterFirstBounce;

    double bouncinessIndex = heightAfterFirstBounce / startingHeight;

    int numBounces;
    cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex) * startingHeight;
    }

    std::cout << fixed << setprecision(4);
    std::cout << totalDistance << endl;

    return 0;
}