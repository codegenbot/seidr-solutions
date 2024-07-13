#include <iostream>
using namespace std;

int main() {
    double heightStart, heightEnd;
    int bounces;

    cin >> heightStart >> heightEnd >> bounces;

    // Calculate the bounciness index (height of first bounce / starting height)
    double bouncinessIndex = heightEnd / heightStart;

    // Calculate the total distance that the ball travels across those bounces
    double distance = 0;
    for(int i=1; i<=bounces; i++) {
        heightEnd /= bouncinessIndex;
        distance += heightStart - heightEnd;
        heightStart = heightEnd;
    }

    cout.precision(4);
    cout << fixed << setprecision(4) << heightStart << endl;
    cout << fixed << setprecision(4) << distance << endl;

    return 0;
}