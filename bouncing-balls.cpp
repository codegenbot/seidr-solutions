#include <iostream>
using namespace std;

double calculateBounciness(double heightStart, double heightFirstBounce) {
    return heightFirstBounce / heightStart;
}

int main() {
    double heightStart, heightFirstBounce, bouncinessIndex, distance = 0.0;
    int numBounces;

    cin >> heightStart >> heightFirstBounce >> numBounces;

    bouncinessIndex = calculateBounciness(heightStart, heightFirstBounce);

    for(int i = 1; i <= numBounces; i++) {
        distance += (heightFirstBounce / (double)i);
    }

    cout.setprecision(10); // to print up to 10 decimal places
    cout << fixed << setprecision(10) << heightStart * bouncinessIndex * (bouncinessIndex + 1.0) / 2.0 << endl;

    return 0;
}