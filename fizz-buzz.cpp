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
        
        if (num < 20) {
            switch(num) {
                case 1: words += " one"; break;
                case 2: words += " two"; break;
                case 3: words += " three"; break;
                case 4: words += " four"; break;
                case 5: words += " five"; break;
                case 6: words += " six"; break;
                case 7: words += " seven"; break;
                case 8: words += " eight"; break;
                case 9: words += " nine"; break;
                case 10: words += " ten"; break;
                case 11: words += " eleven"; break;
                case 12: words += " twelve"; break;
                case 13: words += " thirteen"; break;
                case 14: words += " fourteen"; break;
                case 15: words += " fifteen"; break;
                case 16: words += " sixteen"; break;
                case 17: words += " seventeen"; break;
                case 18: words += " eighteen"; break;
                case 19: words += " nineteen"; break;
            }
        } else {
            switch(num / 10) {
                case 2: words += " twenty"; break;
                case 3: words += " thirty"; break;
                case 4: words += " forty"; break;
                case 5: words += " fifty"; break;
                case 6: words += " sixty"; break;
                case 7: words += " seventy"; break;
                case 8: words += " eighty"; break;
                case 9: words += " ninety"; break;
            }
            if (num % 10 > 0) {
                switch(num % 10) {
                    case 1: words += " one"; break;
                    case 2: words += " two"; break;
                    case 3: words += " three"; break;
                    case 4: words += " four"; break;
                    case 5: words += " five"; break;
                    case 6: words += " six"; break;
                    case 7: words += " seven"; break;
                    case 8: words += " eight"; break;
                    case 9: words += " nine"; break;
                    case 10: words += " ten"; break;
                    case 11: words += " eleven"; break;
                    case 12: words += " twelve"; break;
                    case 13: words += " thirteen"; break;
                    case 14: words += " fourteen"; break;
                    case 15: words += " fifteen"; break;
                    case 16: words += " sixteen"; break;
                    case 17: words += " seventeen"; break;
                    case 18: words += " eighteen"; break;
                    case 19: words += " nineteen"; break;
                }
            }
        }
        
        if (words == "") {
            switch(num) {
                case 1: words = " one"; break;
                case 2: words = " two"; break;
                case 3: words = " three"; break;
                case 4: words = " four"; break;
                case 5: words = " five"; break;
                case 6: words = " six"; break;
                case 7: words = " seven"; break;
                case 8: words = " eight"; break;
                case 9: words = " nine"; break;
                case 10: words = " ten"; break;
                case 11: words = " eleven"; break;
                case 12: words = " twelve"; break;
                case 13: words = " thirteen"; break;
                case 14: words = " fourteen"; break;
                case 15: words = " fifteen"; break;
                case 16: words = " sixteen"; break;
                case 17: words = " seventeen"; break;
                case 18: words = " eighteen"; break;
                case 19: words = " nineteen"; break;
                case 20: words = " twenty"; break;
                case 30: words = " thirty"; break;
                case 40: words = " forty"; break;
                case 50: words = " fifty"; break;
                case 60: words = " sixty"; break;
                case 70: words = " seventy"; break;
                case 80: words = " eighty"; break;
                case 90: words = " ninety"; break;
            }
        }
        
        if (words == "") {
            words = to_string(num);
        }
        
        return words;
    }

    string fizzBuzz(int n) {
        for(int i=1; i<=n; i++) {
            if(i % 3 == 0 && i % 5 == 0)
                return "FizzBuzz";
            else if(i % 3 == 0)
                return "Fizz";
            else if(i % 5 == 0)
                return "Buzz";
            else
                return to_string(i);
        }
    }
};