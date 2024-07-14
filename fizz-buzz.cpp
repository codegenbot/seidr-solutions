#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "0";
        vector<string> units = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> teens = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        if (num < 10) return units[num];
        if (num < 20) return teens[num - 10];

        string res = "";
        int i = 0;
        while (num > 0) {
            if ((num / 100) > 0) {
                res += units[num / 100] + " Hundred";
                num %= 100;
            }
            else if ((num / 20) > 0) {
                res += tens[num / 20];
                num %= 20;
            }
            else if (num < 10) {
                res += units[num];
                break;
            }
            else if (num < 20) {
                res += teens[num - 10];
                break;
            }
            else {
                res += tens[num / 10];
                num %= 10;
            }
        }

        return res;
    }
};