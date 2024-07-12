#include <iostream>
#include <string>

using namespace std;

int calculateScore(int[], int); 

int main() {
    int myValues[] = {127, 97, 8192};
    const int n = sizeof(myValues) / sizeof(myValues[0]);
    for (int i = 0; i < n; i++) {
        cout << "Value at index " << i << ": " << myValues[i] << endl;
    }
    cout << "The score is: " << calculateScore(myValues, n) << endl;
    return 0;
}

int calculateScore(int values[], int n) {
    int sum = 0;
    string scoreString = "";
    for (int i = 0; i < n; i++) {
        if (values[i] > 127)
            scoreString += to_string(values[i]) + " ";
    }
    return stoi(scoreString);
}