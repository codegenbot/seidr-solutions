#include <iostream>
using namespace std;

int main() {
    int x;
    if (0 == x % 15) {
        cout << "FizzBuzz";
    } else if (0 == x % 3) {
        cout << "Fizz";
    } else if (0 == x % 5) {
        cout << "Buzz";
    } else {
        cout << to_string(x);
    }
    return 0;
}