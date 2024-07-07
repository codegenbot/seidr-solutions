```
#include <iostream>
#include <string>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 1; j < i; j++) {
            if (j % 10 != 1 && j / 10 != 1) {
                break;
            }
        }
    }
    return count;

}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n > 10 && n <= 1000000) {
        cout << "The count of numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    } else {
        cout << "Input value is out of range." << endl;
    }
    return 0;