#include <iostream>

using namespace std;

int startsOneEnds(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1)
            count++;
        if (i > 9) {
            int num = i;
            while (num > 0) {
                if (num % 10 == 1)
                    count++;
                num /= 10;
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