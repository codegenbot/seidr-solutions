```c++
#include <string>
using namespace std;

string fizzBuzz(int x) {
    return x % 15 == 0 ? "FizzBuzz" : (x % 3 == 0 && x % 5 != 0) ? "Fizz" : (x % 5 == 0) ? "Buzz" : to_string(x);
}

int main() {
    int x = 42; 
    string result = fizzBuzz(x);
    cout << result << endl;
    return 0;
}