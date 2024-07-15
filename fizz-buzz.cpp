#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string fizzBuzz(int x) {
        if(x % 3 == 0 && x % 5 == 0)
            return std::string("FizzBuzz");
        else if(x % 3 == 0)
            return std::string("Fizz");
        else if(x % 5 == 0)
            return std::string("Buzz");
        else
            return to_string(x);
    }
};

int main() {
    Solution sol;
    cout << sol.fizzBuzz(15) << endl; 
    return 0;
}