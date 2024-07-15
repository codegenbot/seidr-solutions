#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "0";
        string words = "";
        if (num >= 1000000) {
            int q = num / 1000000;
            words += numberToWords(q) + " million ";
            num %= 1000000;
        }
        if (num >= 1000) {
            int q = num / 1000;
            words += numberToWords(q) + " thousand ";
            num %= 1000;
        }
        if (num == 0) return words.trim();
        if (num < 20) {
            static string v[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
            words = v[num] + " ";
        } else if (num < 100) {
            static string w[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
            words = w[num / 10] + " ";
            num %= 10;
            if (num > 0) words += numberToWords(num);
        } else {
            words = numberToWords(num / 100) + " hundred ";
            num %= 100;
            if (num > 0) words += numberToWords(num);
        }
        return words.trim();
    }

    string fizzBuzz(int n) {
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0)
                cout << "FizzBuzz" << endl;
            else if (i % 3 == 0)
                cout << "Fizz" << endl;
            else if (i % 5 == 0)
                cout << "Buzz" << endl;
            else
                cout << i << endl;
        }
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;
    s.fizzBuzz(n);
    return 0;
}