#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0)
            return "0";
        
        if (num % 3 != 0 && num % 5 != 0) 
            return to_string(num);
            
        if (num % 15 == 0)  
            return "FizzBuzz";
            
        if (num % 3 == 0)   
            return "Fizz";
            
        if (num % 5 == 0)
            return "Buzz";
    }
};

int main() {
    Solution s;
    int num;
    cin >> num;
    cout << s.numberToWords(num);
    return 0;
}