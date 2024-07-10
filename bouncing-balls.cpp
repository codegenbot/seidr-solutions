#include <iostream>
using namespace std;

int main() {
    double heightStart, heightFirstBounce;
    int bounces;
    
    cin >> heightStart >> heightFirstBounce >> bounces;
    
    double bouncinessIndex = heightFirstBounce / heightStart;
    
    double totalDistance = 0.0;
    
    for(int i=1; i<=bounces; i++) {
        totalDistance += (heightStart * (1 - pow(0.5, i))) + (heightFirstBounce * pow(2, i));
    }
    
    cout.precision(4);
    cout << fixed << totalDistance << endl;
    
    return 0;
}