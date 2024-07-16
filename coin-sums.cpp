```cpp
#include <iostream>
using namespace std;

int main() {
    int pennies = cents;
    int quarters = pennies / 25;
    pennies %= 25;

    int remainingPennies = pennies;
    int dimes = remainingPennies / 10;
    remainingPennies %= 10;

    int nickles = remainingPennies / 5;
    remainingPennies %= 5;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << remainingPennies << endl;

    return 0;
}