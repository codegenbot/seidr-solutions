#include <iostream>
#include <string>

class Solution {
public:
    string fizzBuzz(int n) {
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0)
                std::cout << "FizzBuzz" << std::endl;
            else if (i % 3 == 0)
                std::cout << "Fizz" << std::endl;
            else if (i % 5 == 0)
                std::cout << "Buzz" << std::endl;
            else
                std::cout << i << std::endl;
        }
    }
};

int main() {
    Solution s;
    int n;
    std::cin >> n;
    s.fizzBuzz(n);
    return 0;
}