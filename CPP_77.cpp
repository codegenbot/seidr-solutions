#include <iostream>
#include <cmath>
using namespace std;

bool iscuber(int);

int mainFunction() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    if (iscuber(a)) {
        cout << "The number is a perfect cube." << endl;
    } 
    else {
        cout << "The number is not a perfect cube." << endl;
    }
    return 0;
}

bool iscuber(int n) {
    int i = round(cbrt(n));
    if (i * i * i == n)
        return true;
    return false;
}