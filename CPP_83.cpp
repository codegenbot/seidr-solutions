#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i == 9) && n > 1) {
            count++;
        } else if (n > 2) {
            for (int j = 1; j <= 9; j++) {
                if ((i == 1 || i == 9) && (j == 1 || j == 9)) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n);
    return 0;
}