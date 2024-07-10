```
#include <iostream>
#include <string>

using namespace std;

int startsOneEnds(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == (to_string(n).back() - '0')) {
            count++;
            for (int j = 1; j < n; j++) {
                cout << i;
            }
            cout << endl;
        }
    }
    return count;
}

int driverMain() {
    int n;
    cin >> n;
    cout << startsOneEnds(n) << endl;
    return 0;
}