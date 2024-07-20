#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 1; j < i; j++) {
            if ((j % 10 != 1 && j / 10 != 1) || (j % 10 == 0)) break;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n) << endl;
    return 0;
}