```c++
#include <iostream>
#include <cmath>
using namespace std;

double bouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double totalDistance(int numBounces, double bouncinessIndex) {
    return (1 - pow(bouncinessIndex, 2)) * (numBounces * 2.0 + 1);
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bounciness = bouncinessIndex(heightAfterFirstBounce, startingHeight);

    std::streamsize precision = std::cout.precision();
    std::cout << fixed << setprecision(4);
    
    cout << bounciness << endl;
    cout << totalDistance(numBounces, bounciness) << endl;

    return 0;
}