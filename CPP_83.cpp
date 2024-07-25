#include <iostream>

using namespace std;

int startsOneEnds(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 10 - n; j++) {
            string num = to_string(i);
            if ((n > 1 && num[0] == '1' || num[n - 1] == '1') && i != 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << startsOneEnds(n) << endl;
    return 0;
}