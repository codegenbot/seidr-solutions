```
#include <iostream>
#include <string>
using namespace std;

int special_factorial(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return n * special_factorial(n - 1);
    }
}

int main_cpp() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The Brazilian factorial of " << n << " is: " << special_factorial(n) << endl;
    return 0;
}
```