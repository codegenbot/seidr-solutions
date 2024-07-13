#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0)
            return "0";
        
        map<int, string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                               {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                               {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, 
                               {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"},
                               {13, "Thirteen"}, {14, "Fourteen"}, {15, "Fifteen"},
                               {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"},
                               {19, "Nineteen"}, {20, "Twenty"}, {30, "Thirty"}, 
                               {40, "Forty"}, {50, "Fifty"}, {60, "Sixty"}, 
                               {70, "Seventy"}, {80, "Eighty"}, {90, "Ninety"}};
        
        if (num >= 100) {
            string temp = numberToWords(num / 100) + " Hundred";
            if ((num % 100) != 0)
                temp += " and " + numberToWords(num % 100);
            return temp;
        }
        else if (num < 20)
            return m[num];
        
        int i = 20;
        while (i <= num) {
            if ((num % i) == 0)
                return m[i];
            i += 10;
        }
        
        if ((num % 10) == 0)
            return m[num];
        
        string temp = numberToWords(num / 10 * 10);
        return temp + " " + m[num % 10];
    }
};