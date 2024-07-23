#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    while(cents >= 5) {
        int nickles = min(cents / 5, quarters);
        quarters -= nickles;
        cents %= 5;
    }

    while(cents >= 10) {
        int dimes = cents / 10; 
        cents %= 10;
    }

    cout << quarters << endl; 
    cout << (cents / 5) << endl;   
    cout << (cents / 10) << endl;      
    cout << cents % 10 << endl;    

    return 0;
}