```cpp
#include <iostream>
#include <string>
using namespace std;

string intToString(int x) {
    string result;
    while (x > 0) {
        result = char('0' + x % 10) + result;
        x /= 10;
    }
    return result;
}

string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0) {
        return "FizzBuzz";
    } else if (x % 3 == 0) {
        return "Fizz";
    } else if (x % 5 == 0) {
        return "Buzz";
    } else {
        return intToString(x);
    }
}

int main() {
    int x;
    cin >> x;
    cout << fizzBuzz(x) << endl;
    return 0;
}
```