```
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        for (int i = 1; i <= n; i++) {
            if ((i % 11 == 0 || i % 13 == 0))
                cout << to_string(i) << " ";
        }
        cout << endl;
    }
    return 0;
}