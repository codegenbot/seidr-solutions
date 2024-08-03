#include <iostream>
using namespace std;

int main() {
    double heightStart;
    double heightAfterFirstBounce;
    int numBounces;

    cin >> heightStart >> heightAfterFirstBounce >> numBounces;

    // Calculate the bounciness index (height of first bounce / starting height)
    double bouncinessIndex = heightAfterFirstBounce / heightStart;

    // Initialize the total distance traveled
    double totalDistanceTraveled = 0.0;

    // Calculate the total distance traveled across all bounces
    for(int i=1; i<=numBounces; i++) {
        totalDistanceTraveled += (heightAfterFirstBounce * pow(bouncinessIndex, i));
    }

    // Print the result
    cout << fixed << setprecision(6);
    cout << totalDistanceTraveled << endl;

    return 0;
}