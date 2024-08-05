#include <iostream>
using namespace std;

double bouncinessIndex(double h0, double hf) {
    return hf / h0;
}

double totalDistance(double bouncinessIndex, int numBounces) {
    double distance = 1 + bouncinessIndex + pow(bouncinessIndex, 2) + ... + pow(bouncinessIndex, numBounces - 1);
    return distance;
}

int main() {
    double h0, hf;
    int numBounces;

    cin >> h0 >> hf >> numBounces;

    double bounciness = bouncinessIndex(h0, hf);

    cout << fixed << setprecision(4) << totalDistance(bounciness, numBounces) << endl;

    return 0;
}