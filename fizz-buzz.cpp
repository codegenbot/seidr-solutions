#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0)
            return "0";
        
        string words = "";
        if (num >= 1000000) {
            int million = num / 1000000;
            words += numberToWords(million) + " million";
            num %= 1000000;
        }
        if (num >= 1000) {
            int thousand = num / 1000;
            words += numberToWords(thousand) + " thousand";
            num %= 1000;
        }
        if (num >= 20) {
            string word = getTensWord(num);
            words += word;
            num = 0;
        } else if (num > 0) {
            string word = getUnitsWord(num);
            words += word;
            num = 0;
        }
        
        return words == "" ? to_string(num) : words;
    }

private:
    string getTensWord(int n) {
        switch (n) {
            case 20: return "twenty";
            case 30: return "thirty";
            case 40: return "forty";
            case 50: return "fifty";
            case 60: return "sixty";
            case 70: return "seventy";
            case 80: return "eighty";
            case 90: return "ninety";
        }
    }

    string getUnitsWord(int n) {
        switch (n) {
            case 1: return "one";
            case 2: return "two";
            case 3: return "three";
            case 4: return "four";
            case 5: return "five";
            case 6: return "six";
            case 7: return "seven";
            case 8: return "eight";
            case 9: return "nine";
            case 10: return "ten";
            case 11: return "eleven";
            case 12: return "twelve";
            case 13: return "thirteen";
            case 14: return "fourteen";
            case 15: return "fifteen";
            case 16: return "sixteen";
            case 17: return "seventeen";
            case 18: return "eighteen";
            case 19: return "nineteen";
        }
    }

    string fizzBuzz(int n) {
        if (n % 3 == 0 && n % 5 == 0)
            return "FizzBuzz";
        else if (n % 3 == 0)
            return "Fizz";
        else if (n % 5 == 0)
            return "Buzz";
        else
            return to_string(n);
    }
};