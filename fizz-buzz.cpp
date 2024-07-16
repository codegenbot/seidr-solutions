#include <iostream>
#include <string>

class Solution {
public:
    std::string fizzBuzz(int x) {
        if (x % 3 == 0 && x % 5 == 0)
            return "FizzBuzz";
        else if (x % 3 == 0)
            return "Fizz";
        else if (x % 5 == 0)
            return "Buzz";
        else
            return std::to_string(x);
    }
};

int main() {
    Solution solution;
    for (int i = 1; i <= 15; ++i) {
        cout << solution.fizzBuzz(i) << endl;
    }
    return 0;
}