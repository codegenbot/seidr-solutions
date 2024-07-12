```cpp
#include <iostream>
using namespace std;

int calculateScore(int* myValues, int n) {
    int score = 0;
    for (int i = 0; i < n; i++) {
        if (myValues[i] > 127)
            score += myValues[i];
    }
    return score;
}

int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        string str = to_string(myValues[i]);
        cout << "Value at index " << i << ": " << str << endl;
    }
    cout << "The score is: " << calculateScore(myValues, n) << endl;
    assert(calculateScore(myValues, n) == 8192); 
    return 0;
}