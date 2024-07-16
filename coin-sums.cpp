#include <vector>
#include <iostream>

using namespace std;

vector<int> coinSums(int cents) {
    vector<int> result(4, 0); // Initialize with zero coins of each type

    while (cents > 0) {
        if (cents >= 25) { // Use quarters first
            cents -= 25;
            result[0]++;
        } else if (cents >= 10) { // Then use dimes
            cents -= 10;
            result[1]++;
        } else if (cents >= 5) { // Next, use nickels
            cents -= 5;
            result[2]++;
        } else { // Finally, use pennies
            cents -= 1;
            result[3]++;
        }
    }

    return result;
}

int main() {
    int cents;
    cin >> cents;

    vector<int> result = coinSums(cents);

    cout << result[0] << endl;
    cout << result[1] << endl;
    cout << result[2] << endl;
    cout << result[3] << endl;

    return 0;
}