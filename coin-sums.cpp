Here is the solution:

#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    cout << cents / 25 << endl; // Quarters
    cout << (cents % 25) / 10 << endl; // Dimes
    cout << ((cents % 25) % 10) / 5 << endl; // Nickles
    cout << (cents % 25) % 10 << endl; // Pennies

    return 0;
}