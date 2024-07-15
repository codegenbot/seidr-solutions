#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "0";
        
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
            if (temp == 1) {
                words += "one";
            } else if (temp == 2) {
                words += "two";
            } else if (temp == 3) {
                words += "three";
            } else if (temp == 4) {
                words += "four";
            } else if (temp == 5) {
                words += "five";
            } else if (temp == 6) {
                words += "six";
            } else if (temp == 7) {
                words += "seven";
            } else if (temp == 8) {
                words += "eight";
            } else if (temp == 9) {
                words += "nine";
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
            if (num == 10) {
                return "ten";
            } else if (num == 11) {
                return "eleven";
            } else if (num == 12) {
                return "twelve";
            } else if (num == 13) {
                return "thirteen";
            } else if (num == 14) {
                return "fourteen";
            } else if (num == 15) {
                return "fifteen";
            } else if (num == 16) {
                return "sixteen";
            } else if (num == 17) {
                return "seventeen";
            } else if (num == 18) {
                return "eighteen";
            } else if (num == 19) {
                return "nineteen";
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
        if (num < 20) {
            return oneDigit(num);
        }
        return "twenty" + oneDigit(num - 20);
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