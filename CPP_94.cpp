```cpp
#include <iostream>
using namespace std;

// Function to calculate score
int calculateScore(int* myValues, int n) {
    int score = 0;
    for (int i = 0; i < n; i++) {
        if (myValues[i] > 128)
            score += myValues[i];
        else
            score += 256 - myValues[i];
    }
    return score;
}

int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        cout << "Value at index " << i << ": ";
        cout << myValues[i] << endl;
    }
    cout << "The score is: " << calculateScore(myValues, n) << endl;
    assert(calculateScore(myValues, n) == 1224); 
    return 0;
}