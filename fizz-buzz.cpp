#include <iostream>
using namespace std;

string fizzBuzz(int x) {
    string result;
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
    int num;
    cin >> num;
    cout << fizzBuzz(num) << endl;
    return 0;
}