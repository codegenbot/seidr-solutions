#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double distance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numBounces; i++) {
        double bounceHeight = firstBounceHeight * bouncinessIndex;
        distance += bounceHeight * 2;
        bouncinessIndex *= bouncinessIndex;
    }

    cout << fixed << setprecision(15) << distance << endl;

    return 0;
}