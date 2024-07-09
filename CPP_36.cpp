```cpp
#include <iostream>
#include <string>
#include <sstream>
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
        ostringstream oss;
        oss << "Invalid input. Please enter a positive integer.";
        cout << oss.str() << endl; 
    } else {
        int result = fizz_buzz(n);
        ostringstream oss;
        oss << "Result for " << n << ": " << result;
        cout << oss.str() << endl; 
    }
    return 0;
}