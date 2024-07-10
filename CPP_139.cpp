```cpp
#include <iostream>
#include <limits>
#include <string>

using namespace std;

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= 1LL * i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    string num_str;
    while(n > 0){
        int remainder = n % 10;
        num_str.insert(0, char('0' + remainder));
        n /= 10;
    }
    cout << "The special factorial of " << num_str << " is: " << special_factorial(stoi(num_str)) << endl;
}