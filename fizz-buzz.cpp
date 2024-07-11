#include <iostream>
#include <string>
using namespace std;

string fizzBuzz(long long x) {
    if (x % 3 == 0 && x % 5 == 0) {
        return "FizzBuzz";
    } else if (x % 3 == 0) {
        return "Fizz";
    } else if (x % 5 == 0) {
        return "Buzz";
    } else {
        return to_string(x);
    }
}

int main() {
    long long x;
    cin >> x;

    cout << fizzBuzz(x) << endl;

    return 0;
}