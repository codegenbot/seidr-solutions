```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x % 3 == 0) {
        if (x % 5 == 0)
            cout << "FizzBuzz";
        else
            cout << "Fizz";
    } else if (x % 5 == 0) {
        cout << "Buzz";
    } else {
        cout << to_string(x);
    }
    return 0;
}