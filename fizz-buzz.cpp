```c++
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << (x % 15 == 0) ? "FizzBuzz" : 
     (x % 5 == 0) ? "Buzz" : 
     (x % 3 == 0) ? "Fizz" : to_string(x);
}