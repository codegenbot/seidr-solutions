```c++
#include <iostream>
using namespace std;

string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    if (x % 3 == 0)
        return x % 5 == 0 ? "FizzBuzz" : "Fizz";
    return x != 0 ? to_string(x) : "0"; 
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    for(int i = 1; i <= x; ++i) {
        cout << fizzBuzz(i) << endl;
    }
    return 0;
}