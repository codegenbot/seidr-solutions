#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; 

    int q = cents / 25; 
    cents %= 25;
    while(cents >= 25) {
        q += cents / 25;
        cents %= 25;
    }

    int d = cents / 10; 
    cents %= 10;
    while(cents >= 10) {
        d += cents / 10;
        cents %= 10;
    }

    int n = cents / 5; 
    cents %= 5;
    while(cents >= 5) {
        n += cents / 5;
        cents %= 5;
    }

    int p = cents; 

    cout << q << endl;
    cout << d << endl;
    cout << n << endl;
    cout << p << endl;

    return 0;
}