#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    while (quarters > 0 && cents < 25) quarters--;
    cents %= 25;

    cout << quarters << endl; 
    cout << (cents / 10) << endl;   
    cout << ((cents % 100) / 5) << endl;      
    cout << (((cents % 100) % 5)) << endl;     

    return 0;
}