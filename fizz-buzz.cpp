#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "0";
        string res = "";
        if (num >= 1000000) {
            res += numberToWords(num / 1000) + " thousand ";
            num %= 1000;
        }
        if (num >= 1000) {
            res += numberToWords(num / 1000) + " thousand ";
            num %= 1000;
        }
        if (num >= 200) res += "two hundred ";
        else if (num >= 100) {
            res += numberToWords(num / 100) + " hundred ";
            num %= 100;
        }
        if (num >= 90) res += "ninety ";
        else if (num >= 80) res += "eighty ";
        else if (num >= 70) res += "seventy ";
        else if (num >= 60) res += "sixty ";
        else if (num >= 50) res += "fifty ";
        else if (num >= 40) res += "forty ";
        else if (num >= 30) res += "thirty ";
        else if (num >= 20) {
            if (num == 20) res += "twenty ";
            else res += numberToWords(num / 10) + " ten ";
            num %= 10;
        }
        if (num == 1) res += "one";
        else if (num > 1 && num < 4) {
            switch (num % 10) {
                case 0: res += "three"; break;
                case 1: res += "two"; break;
                case 2: res += "three"; break;
                case 3: res += "three"; break;
            }
        } else if (num >= 4 && num <= 14) {
            switch (num % 10) {
                case 0: res += "fourteen"; break;
                case 1: res += "thirteen"; break;
                case 2: res += "fourteen"; break;
                case 3: res += "fourteen"; break;
                case 4: res += "fourteen"; break;
                case 5: res += "fifteen"; break;
                case 6: res += "sixteen"; break;
                case 7: res += "seventeen"; break;
                case 8: res += "eighteen"; break;
                case 9: res += "nineteen"; break;
            }
        } else if (num >= 15 && num <= 19) {
            switch (num % 10) {
                case 0: res += "fifteen"; break;
                case 1: res += "sixteen"; break;
                case 2: res += "seventeen"; break;
                case 3: res += "eighteen"; break;
                case 4: res += "nineteen"; break;
                case 5: res += "twenty"; break;
                case 6: res += "twenty-one"; break;
                case 7: res += "twenty-two"; break;
                case 8: res += "twenty-three"; break;
                case 9: res += "twenty-four"; break;
            }
        } else if (num % 10 == 0) {
            switch (num / 10) {
                case 1: res += "ten"; break;
                case 2: res += "twenty"; break;
                case 3: res += "thirty"; break;
                case 4: res += "forty"; break;
                case 5: res += "fifty"; break;
                case 6: res += "sixty"; break;
                case 7: res += "seventy"; break;
                case 8: res += "eighty"; break;
                case 9: res += "ninety"; break;
            }
        } else {
            switch (num % 10) {
                case 1: res += "one"; break;
                case 2: res += "two"; break;
                case 3: res += "three"; break;
                case 4: res += "four"; break;
                case 5: res += "five"; break;
                case 6: res += "six"; break;
                case 7: res += "seven"; break;
                case 8: res += "eight"; break;
                case 9: res += "nine"; break;
            }
        }
        return res;
    }

    string fizzBuzz(int num) {
        if (num % 3 == 0 && num % 5 == 0)
            return "FizzBuzz";
        else if (num % 3 == 0)
            return "Fizz";
        else if (num % 5 == 0)
            return "Buzz";
        else
            return to_string(num);
    }
};