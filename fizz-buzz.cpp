#include <iostream>
using namespace std;

string fizzBuzz(int x) {
    return x % 15 == 0 ? "FizzBuzz" : x % 3 == 0 ? "Fizz" : x % 5 == 0 ? "Buzz" : to_string(x);
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    cout << fizzBuzz(x) << endl;
    return 0;
}