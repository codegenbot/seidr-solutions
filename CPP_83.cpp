```cpp
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 1; j < pow(10, n); j++) {
            string str = to_string(i * pow(10, n - 1) + j);
            if (str[0] == '1' || str.back() == '1') {
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