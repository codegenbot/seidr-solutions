#include <iostream>
using namespace std;

string fizzBuzz(int x) {
    string result;
    if (x % 3 == 0 && x % 5 == 0)
        result = "FizzBuzz";
    else if (x % 3 == 0)
        result = "Fizz";
    else if (x % 5 == 0)
        result = "Buzz";
    else
        result = to_string(x);
    return result;
}

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << fizzBuzz(i) << endl;
    }
    return 0;
}