#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        map<int, string> ones = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, 
                                  {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
        map<int, string> teens = {{10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, 
                                   {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, 
                                   {18, "Eighteen"}, {19, "Nineteen"}};
        map<int, string> tens = {{20, "Twenty"}, {30, "Thirty"}, {40, "Forty"}, {50, "Fifty"}, 
                                  {60, "Sixty"}, {70, "Seventy"}, {80, "Eighty"}, {90, "Ninety"}};
        if (num >= 100) {
            return hundreds(num) + " Hundred" + (num % 100 ? " and " : "") + numberToWords(num % 100);
        } else if (num >= 20) {
            return tens[num / 10] + (num % 10 ? " " + ones[num % 10] : "");
        } else if (num >= 10) {
            return teens[num];
        } else {
            return ones[num];
        }
    }

    string hundreds(int num) {
        if (num == 0) return "";
        if (num / 100 > 1) return ones[num / 100] + " Hundred";
        return ones[num / 100] + " Hundred";
    }
};

string fizzBuzz(int x) {
    Solution s;
    if(x % 3 == 0 && x % 5 == 0) return "FizzBuzz";
    else if (x % 3 == 0) return "Fizz";
    else if (x % 5 == 0) return "Buzz";
    return to_string(x);
}