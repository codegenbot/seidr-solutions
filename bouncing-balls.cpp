#include <iostream>
using namespace std;

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    cin >> startHeight >> firstBounce >> numBounces;
    bounciness = (firstBounce / startHeight);

    double distance = 0;
    for(int i = 1; i <= numBounces; i++) {
        distance += pow(bounciness, i);
    }

    cout.precision(6); // set the precision to 6
    cout << fixed << bounciness << endl;
    cout << fixed << distance << endl;

    return 0;
}