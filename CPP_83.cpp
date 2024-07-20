#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if (n > 1 && i != 1) {
            for (int j = 0; j < n - 1; j++) {
                cout << i;
            }
            if (i == 1) {
                cout << "1";
            } else {
                cout << "9";
            }
            cout << endl;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n);
    return 0;