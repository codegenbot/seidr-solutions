#include <iostream>
using namespace std;

int main() {
    double height1, height2, bounciness;
    int numBounces;

    cin >> height1 >> height2 >> numBounces;

    if (height1 == 0 || height2 <= height1) {
        cout << "Invalid input" << endl;
        return 1;
    }

    bounciness = height2 / height1;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; ++i) {
        if (bounciness < 1)
            break;
        totalDistance += bounciness;
        bounciness *= bounciness;
    }

    cout << fixed << setprecision(5);
    cout << totalDistance + height2 << endl;

    return 0;
}