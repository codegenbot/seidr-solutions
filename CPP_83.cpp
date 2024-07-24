#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 10) {
            count++;
        }
    }
    for (int i = 11; i < 1000000; i++) {
        string str = to_string(i);
        if ((str[0] == '1' || str[str.length() - 1] == '1') && str.length() == n) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n);
    return 0;
}