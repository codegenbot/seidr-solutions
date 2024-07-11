```c++
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    cout << quarters = cents / 25;
    int remainder = cents - (quarters * 25);
    cout << dimes + (remainder >= 10) << endl;
    remainder %= 10;
    cout << nickels + (remainder >= 5) << endl;
    remainder %= 5;
    cout << pennies + remainder << endl;

    return 0;
}