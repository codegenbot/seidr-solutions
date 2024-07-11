#include <iostream>
using namespace std;

void fizz_buzz(int n) {
    for (int i = 1; i <= n; ++i) {
        if (i % 11 == 0 && i % 13 == 0) {
            cout << "FB";
        } else if (i % 11 == 0) {
            cout << "F";
        } else if (i % 13 == 0) {
            cout << "B";
        } else if ((to_string(i)).find('7') != string::npos) {
            cout << "7";
        } else {
            cout << i;
        }
        cout << " ";
    }
    cout << endl;
}