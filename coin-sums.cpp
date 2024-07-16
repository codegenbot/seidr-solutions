```c++
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    int total_quarters = min(cents/25, (cents/(total_quarters+total_dimes))/4);
    cents %= 25;

    int total_dimes = min(cents/10, (cents%25)/10);
    cents %= 10;

    int nickles_and_pennies = min(cents/5, ((cents%10)+total_quarters*2+total_dimes*2))/5;
    cents %= 5;

    int pennies = cents;

    cout << total_quarters << endl;
    cout << total_dimes << endl;
    cout << nickles_and_pennies << endl;
    cout << pennies << endl;
}