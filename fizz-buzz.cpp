#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "0";
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
        if (num >= 100) {
            int hundred = num / 100;
            words += threeHundred(hundred);
            num %= 100;
        }
        if (num > 19) {
            int tens = num / 10;
            if (tens == 2 || tens == 3 || tens == 4)
                words += "twenty-" + threeWords(num % 10);
            else if (tens == 8)
                words += "eighty" + (num % 10 > 0 ? "-" : "") + threeWords(num % 10);
            else if (tens == 9) {
                if (num % 10 == 0)
                    words += "ninety";
                else
                    words += "ninety-" + threeWords(num % 10);
            }
        } else {
            if (num > 19) {
                if (num % 10 == 2 || num % 10 == 3 || num % 10 == 4)
                    words += "twenty" + (num % 10 > 0 ? "-" : "") + threeWords(num % 10);
                else if (num % 10 == 8)
                    words += "eighty" + (num % 10 > 0 ? "-" : "") + threeWords(num % 10);
                else if (num % 10 == 9) {
                    if (num % 10 == 0)
                        words += "ninety";
                    else
                        words += "ninety-" + threeWords(num % 10);
                } else {
                    words += numberToWords(num % 10);
                }
            } else if (num > 9) {
                int digit = num / 10;
                if (digit == 2 || digit == 3 || digit == 4)
                    words += "twenty-" + threeWords(num % 10);
                else if (digit == 8)
                    words += "eighty" + (num % 10 > 0 ? "-" : "") + threeWords(num % 10);
                else if (digit == 9) {
                    if (num % 10 == 0)
                        words += "ninety";
                    else
                        words += "ninety-" + threeWords(num % 10);
                } else {
                    words += numberToWords(digit * 10) + "-" + threeWords(num % 10);
                }
            } else if (num > 4) {
                int digit = num / 5;
                if (digit == 2)
                    words += "forty";
                else if (digit == 3)
                    words += "fifty";
                else if (digit == 4)
                    words += "sixty";
                else
                    words += "seventy" + (num % 5 > 0 ? "-" : "") + threeWords(num % 5);
            } else if (num > 1) {
                if (num == 2)
                    words += "twenty";
                else if (num == 3)
                    words += "thirty";
                else if (num == 4)
                    words += "forty";
                else
                    words += "fifty" + (num % 5 > 0 ? "-" : "") + threeWords(num % 5);
            } else {
                if (num == 1) {
                    if (num % 3 == 0 && num % 5 == 0)
                        return "FizzBuzz";
                    else if (num % 3 == 0)
                        return "Fizz";
                    else if (num % 5 == 0)
                        return "Buzz";
                    else
                        return to_string(num);
                } else {
                    return to_string(num);
                }
            }
        }
        return words;
    }

    string threeHundred(int num) {
        switch (num) {
            case 1:
                return "one hundred";
            case 2:
                return "two hundred";
            case 3:
                return "three hundred";
            case 4:
                return "four hundred";
            case 5:
                return "five hundred";
            case 6:
                return "six hundred";
            case 7:
                return "seven hundred";
            case 8:
                return "eight hundred";
            case 9:
                return "nine hundred";
            default:
                return to_string(num) + " hundred";
        }
    }

    string threeWords(int num) {
        switch (num) {
            case 1:
                return "one";
            case 2:
                return "two";
            case 3:
                return "three";
            case 4:
                return "four";
            case 5:
                return "five";
            case 6:
                return "six";
            case 7:
                return "seven";
            case 8:
                return "eight";
            case 9:
                return "nine";
            default:
                return to_string(num);
        }
    }
};