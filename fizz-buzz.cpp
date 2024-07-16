#include <iostream>
using namespace std;

string fizzBuzz(int x) {
    if ((long long)x % 3 == 0 && (long long)x % 5 == 0) return "FizzBuzz";
    else if ((long long)x % 3 == 0) return "Fizz";
    else if ((long long)x % 5 == 0) return "Buzz";
    else return to_string(x);
}

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << fizzBuzz(i) << endl;
    }
    return 0;
}