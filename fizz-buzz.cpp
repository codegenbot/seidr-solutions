#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "0";
        
        string words = "";
        
        int temp = num;
        if (temp / 3 > 0) {
            if ((temp / 5 != 0 && temp % 15 != 0) || (temp / 3 != 0)) {
                if (!words.empty()) {
                    words += " ";
                }
                words += "Fizz";
            } else {
                words = "FizzBuzz";
            }
            temp %= 3;
        }
        
        if (temp / 5 > 0) {
            if ((temp / 3 != 0 && temp % 15 != 0) || (temp / 5 != 0)) {
                if (!words.empty()) {
                    words += " ";
                }
                words += "Buzz";
            } else {
                words = "FizzBuzz";
            }
            temp %= 5;
        }
        
        for(int i=1; i<=num; i++) {
            if(i % 3 == 0 && i % 5 != 0) {
                if(words.empty()) {
                    words = "Fizz";
                } else {
                    words += " Fizz";
                }
            } 
            else if(i % 5 == 0 && i % 3 != 0) {
                if(words.empty()) {
                    words = "Buzz";
                } else {
                    words += " Buzz";
                }
            } 
            else if(i % 15 == 0) {
                words = "FizzBuzz";
            } 
            else {
                words += to_string(i);
            }
            words += " ";
        }
        
        return words;
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