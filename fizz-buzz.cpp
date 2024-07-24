#include <iostream>
using namespace std;

string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return "Fizz";
    else if (x % 5 == 0)
        return "Buzz";
    else
        return to_string(x);
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << fizzBuzz(x) << endl;
    return 0;
}