```cpp
#include <string>
using namespace std;

class Solution {
public:
    string fizzBuzz(int x) {
        if(x % 3 == 0 && x % 5 == 0)
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
    Solution solution;
    int x; // input integer
    cout << "Enter an integer: ";
    cin >> x;
    string result = solution.fizzBuzz(x);
    cout << result << endl;
    return 0;
}