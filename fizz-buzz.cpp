#include <iostream>
#include <string>

class Solution {
public:
    std::string fizzBuzz(int n) {
        if (n % 3 == 0 && n % 5 == 0) return "FizzBuzz";
        else if (n % 3 == 0) return "Fizz";
        else if (n % 5 == 0) return "Buzz";
        else return std::to_string(n);
    }
};

int main() {
    Solution solution;
    for (int i = 1; i <= 15; ++i) {
        std::cout << solution.fizzBuzz(i) << std::endl;
    }
    return 0;
}