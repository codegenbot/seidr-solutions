#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x % 3 == 0 && x % 5 == 0) {
        cout << "FizzBuzz" << '\n';
    } else if (x % 3 == 0) {
        cout << "Fizz" << '\n';
    } else if (x % 5 == 0) {
        cout << "Buzz" << '\n';
    } else {
        cout << x << '\n';
    }

    return 0;
}