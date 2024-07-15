```c++
#include <iostream>
using namespace std;

class Solution {
public:
    string fizzBuzz(int num) {
        if (num % 15 == 0) {
            return "FizzBuzz";
        }
        else if (num % 5 == 0) {
            return "Buzz";
        }
        else if (num % 3 == 0) {
            return "Fizz";
        }
        else {
            return std::to_string(num);
        }
    }
};

int main() {
    Solution solution;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << solution.fizzBuzz(num) << endl;
    return 0;
}