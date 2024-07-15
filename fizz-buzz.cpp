#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string fizzBuzz(int x) {
        if(x % 15 == 0)
            return "FizzBuzz";
        else if(x % 3 == 0)
            return "Fizz";
        else if(x % 5 == 0)
            return "Buzz";
        else
            return to_string(x);
    }
};

int main() {
    Solution sol;
    cout << sol.fizzBuzz(15) << endl; 
    return 0;
}