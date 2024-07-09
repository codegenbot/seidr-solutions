```cpp
#include <iostream>
#include <string>
using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if ((i % 11 == 0 || i % 13 == 0))
            count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 1) {
        string output = "Invalid input. Please enter a positive integer.\n";
        cout << output; 
    } else {
        int result = fizz_buzz(n);
        string output = "Result for " + to_string(n) + ": " + to_string(result) + "\n";
        cout << output;
    }
    return 0;
}