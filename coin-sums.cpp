#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents;
    cout << quarters << endl;
    quarters %= 4; 
    cout << dimes << endl;
    dimes %= 10; 
    cout << nickles << endl;
    nickles %= 20; 
    cout << pennies << endl;

    return 0;
}