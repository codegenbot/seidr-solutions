#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string fizzBuzz(int x) {
        return (x % 15 == 0) ? "FizzBuzz" : 
               (x % 3 && !x % 5) ? "Fizz" :
               (x % 5 && !x % 3) ? "Buzz" : 
               to_string(x);
    }
};

int main() {
    Solution sol;
    cout << sol.fizzBuzz(300644) << endl;
    return 0;
}