```
#include <iostream>
#include <cmath>

using namespace std;

bool starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 1; j < static_cast<int>(pow(10, n)); j++) {
            int num = i * pow(10, n - 1) + j;
            if ((num / static_cast<int>(pow(10, n - 1))) % 10 == 1 || num % 10 == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n);
}