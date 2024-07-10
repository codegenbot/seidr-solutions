#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;

    bouncinessIndex = firstBounce / startHeight;

    cout.precision(4);
    cout << fixed;
    cout << setprecision(5);

    cout << bouncinessIndex << endl;

    double distance = 0.0;
    for(int i=1; i<=numBounces; ++i) {
        distance += pow(bouncinessIndex, i);
    }

    cout << fixed;
    cout << setprecision(4);
    cout << distance << endl;

    return 0;
}