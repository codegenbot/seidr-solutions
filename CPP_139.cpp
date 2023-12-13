```
#include <iostream>
#include <string>
using namespace std;

long long special_factorial(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return n * special_factorial(n - 1);
    }
}

int main() {
    string str = "The Brazilian factorial of ";
    int n = stoi(str.substr(0, str.find(" ")));
    cout << "The Brazilian factorial of " << n << " is: " << special_factorial(n) << endl;
    return 0;
}
```