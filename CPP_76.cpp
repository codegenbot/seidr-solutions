```cpp
#include<iostream>
using namespace std;

bool is_simple_power(int x, int n);

bool is_simple_power(int x, int n) {
    return pow(n, log(x) / log(n)) == x;
}

int main() {
    int x, n;
    cout << "Enter two numbers: ";
    cin >> x >> n;
    if(is_simple_power(x,n))
        cout << x << " is a simple power of " << n;
    else
        cout << x << " is not a simple power of " << n;
    return 0;
}