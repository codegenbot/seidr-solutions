```c++
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "zero";
        
        string words = "";
        
        int temp = num;
        if (temp / 100 > 0) {
            words += threeDigit(temp / 100) + " hundred";
            temp %= 100;
        }
        
        if (temp / 10 > 0) {
            if (!words.empty() && temp % 10 == 0) {
                words += " and zero";
            } else {
                words += " and " + twoDigit(temp / 10);
            }
            temp %= 10;
        }
        
        if (temp > 0) {
            if (!words.empty()) {
                words += " ";
            }
            switch (temp % 10) {
                case 1: 
                    words += (temp == 11 ? "eleven" : temp == 12 ? "twelve" : temp == 13 ? "thirteen" : temp == 14 ? "fourteen" : temp == 15 ? "fifteen" : temp == 16 ? "sixteen" : temp == 17 ? "seventeen" : temp == 18 ? "eighteen" : temp == 19 ? "nineteen" : "one") + (temp > 1 ? " one" : "");
                    break;
                case 2: words += "two";
                    break;
                case 3: words += "three";
                    break;
                case 4: words += "four";
                    break;
                case 5: words += "five";
                    break;
                case 6: words += "six";
                    break;
                case 7: words += "seven";
                    break;
                case 8: words += "eight";
                    break;
                case 9: words += "nine";
                    break;
            }
        }
        
        return words;
    }
    
    string threeDigit(int num) {
        if (num == 0) return "zero";
        if (num < 10) {
            return oneDigit(num);
        }
        if (num < 20) {
            switch (num) {
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
        if (num < 30) {
            return "twenty" + oneDigit(num - 20);
        }
        if (num < 40) {
            return "thirty" + oneDigit(num - 30);
        }
        if (num < 50) {
            return "forty" + oneDigit(num - 40);
        }
        if (num < 60) {
            return "fifty" + oneDigit(num - 50);
        }
        if (num < 70) {
            return "sixty" + oneDigit(num - 60);
        }
        if (num < 80) {
            return "seventy" + oneDigit(num - 70);
        }
        if (num < 90) {
            return "eighty" + oneDigit(num - 80);
        }
        return "ninety" + oneDigit(num - 90);
    }
    
    string twoDigit(int num) {
        switch (num) {
            case 0: return "zero";
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
    
    string oneDigit(int num) {
        switch (num) {
            case 0: return "zero";
            case 1: return "one";
            case 2: return "two";
            case 3: return "three";
            case 4: return "four";
            case 5: return "five";
            case 6: return "six";
            case 7: return "seven";
            case 8: return "eight";
            case 9: return "nine";
        }
    }
};

int main() {
    Solution solution;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << solution.numberToWords(num) << endl;
    return 0;
}