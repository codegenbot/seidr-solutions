#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string fizzBuzz(int x) {
        return (x % 15 == 0) ? "FizzBuzz" : 
               (x % 3 == 0 && x % 5 != 0) ? "Fizz" :
               (x % 5 == 0 && x % 3 != 0) ? "Buzz" : 
               to_string(x);
    }
};

int main() {
    Solution sol;
    cout << sol.fizzBuzz(300644) << endl;
    return 0;
}