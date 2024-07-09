#include <iostream>
using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        if ((i % 11 == 0 || i % 13 == 0) && str[str.length() - 1] == '7')
            count++;
    }
    if (count == 0)
        cout << "No numbers meet the condition.\n";
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        cout << "The result is: " << fizz_buzz(n);
    }
}