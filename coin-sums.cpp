#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    vector<int> coins = {25, 10, 5, 1};
    int p, n, d, q;
    
    if(cents >= 100) {
        q = cents / 25;
        cents %= 25;
        
        if(cents >= 10) {
            d = cents / 10;
            cents %= 10;
            
            if(cents >= 5) {
                n = cents / 5;
                cents %= 5;
                
                p = cents;
            } else {
                p = cents;
            }
        } else {
            if(cents >= 5) {
                n = cents / 5;
                p = cents % 5;
            } else {
                p = cents;
            }
        }
    } else if (cents >= 10) {
        d = cents / 10;
        cents %= 10;
        
        if(cents >= 5) {
            n = cents / 5;
            p = cents % 5;
        } else {
            p = cents;
        }
    } else if (cents >= 5) {
        n = cents / 5;
        p = cents % 5;
    } else {
        p = cents;
    }

    cout << q << endl;
    cout << d << endl;
    cout << n << endl;
    cout << p << endl;

    return 0;
}