#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickles, pennies

    int quaters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << quaters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}