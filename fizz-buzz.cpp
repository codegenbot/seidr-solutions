#include <iostream>
#include <string>
using namespace std;

void fizzBuzz(int n) {
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (i % 3 == 0)
            cout << "Fizz" << endl;
        else if (i % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << to_string(i) << endl;
    }
}

int main() {
    int x;
    cin >> x;
    fizzBuzz(x);
    return 0;
}