#include <iostream>

class Solution {
public:
    string fizzBuzz(int num) {
        if (num % 3 == 0 && num % 5 == 0) {
            return "FizzBuzz";
        } else if (num % 3 == 0) {
            return "Fizz";
        } else if (num % 5 == 0) {
            return "Buzz";
        } else {
            return to_string(num);
        }
    }
};

int main() {
    Solution solution;
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << solution.fizzBuzz(num) << std::endl;
    return 0;