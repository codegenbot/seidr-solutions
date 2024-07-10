#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; 

    int q = cents / 25; 
    for (int i = 0; i < q; i++) {
        cents -= 25;
    }

    int d = cents / 10; 
    for (int i = 0; i < d; i++) {
        cents -= 10;
    }

    int n = cents / 5; 
    for (int i = 0; i < n; i++) {
        cents -= 5;
    }

    int p = cents;

    cout << q << endl;
    cout << d << endl;
    cout << n << endl;
    cout << p << endl;

    return 0;
}