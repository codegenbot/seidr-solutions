#include <iostream>
#include <assert.h> 
using namespace std;

int mainFunction() {
    int a, b, c;
    cout << "Enter three numbers: ";
    if (!(cin >> a) || !(cin >> b) || !(cin >> c)) {
        cout << "Error: Please enter valid integer values.\n";
    } else {
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    }

    assert(a==3 && b==4 && c==7); 

    return 0;
}