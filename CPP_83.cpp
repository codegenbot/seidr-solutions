#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        string str = to_string(i);
        str.append(n-1, '0');
        if ((str[0] == '1' || str.back() == '1')) {
            count++;
        }
    }
    return count > 0;
}

int main() {
    int n;
    cin >> n;
    cout << (starts_one_ends(n) ? "true\n" : "false\n");
}