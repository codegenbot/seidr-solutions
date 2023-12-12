```cpp
#include <iostream>
using namespace std;

int multiply(int a, int b);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The product is: " << multiply(a, b) << endl;
    return 0;
}
```