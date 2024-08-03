#include <string>
using namespace std;

class Solution {
public:
    string numberToWords(int num) {
        if (num == 0)
            return "0";
        
        vector<string> units = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> teens = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        if (num < 10) {
            return units[num];
        } else if (num < 20) {
            return teens[num - 10];
        } else if (num < 100) {
            return tens[num / 10] + (units[num % 10] != "" ? " " + units[num % 10] : "");
        } else if (num < 1000) {
            return units[num / 100] + " Hundred" + ((num % 100) == 0 ? "" : " and " + numberToWords(num % 100));
        } else if (num < 2000) {
            return "One Thousand" + ((num == 1000) ? "" : " and " + numberToWords(num % 1000));
        }
        
        return "";
    }
};