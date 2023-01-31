#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    int quarter = cents / 25;
    cents = cents % 25;
    int dime = cents / 10;
    cents = cents % 10;
    int nickle = cents / 5;
    cents = cents % 5;
    int penny = cents;
    cout << quarter << endl;
    cout << dime << endl;
    cout << nickle << endl;
    cout << penny << endl;
    return 0;
}
