#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "0";
        vector<string> lessThan20 = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        vector<string> tens = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

        if (num < 20) {
            return lessThan20[num];
        } else if (num < 100) {
            return tens[num / 10] + (num % 10 == 0 ? "" : " " + lessThan20[num % 10]);
        }
    }

    string fizzBuzz(int n) {
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                cout << "FizzBuzz" << endl;
            else if (i % 3 == 0)
                cout << "Fizz" << endl;
            else if (i % 5 == 0)
                cout << "Buzz" << endl;
            else
                cout << numberToWords(i) << endl;
        }
    }
};