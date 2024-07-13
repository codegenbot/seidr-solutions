#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    cout << (quarters > 0 ? quarters : 0) << endl;   
    cout << (cents / 10 > 0 ? cents / 10 : 0) << endl;  
    cout << (cents % 10 >= 5 ? 1 + (cents % 10 - 5) / 5 : 0) << endl;      
    cout << (cents % 10 < 5 ? cents % 10 : 0) << endl;     

    return 0;
}